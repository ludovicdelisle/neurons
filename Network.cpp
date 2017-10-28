//
// Created by Ludovic Delisle on 10/9/17.
//

#include "Network.h"
#include <iostream>
#include <random>

using namespace std;

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(0,100);


Network::Network(int Ce, int Ci) {
    vector<vector<int>> k(Ce + Ci, vector<int>(Ce + Ci));

    for (int i = 0; i < Ci + Ce; ++i) {
        for (int j = 0; j < Ci + Ce; ++j) {
            k[i][j] = 0;
            bool again = false; //mettre true si c'est confirmé qu'il peut y avoir plusieurs connections
            while (again) {
                if (distribution(generator) > 90) {
                    k[i][j] += 1;
                }else{
                    again = false;
                }
            }
            if (i == 0) {
                if (j<Ce) {

                    Neuron* n1 = new Neuron (true, this);
                    list_neurons.push_back(n1);
                    list_inhibitory_neurons.push_back(n1);
                } else {
                    Neuron* n1 = new Neuron (false, this);
                    list_neurons.push_back(n1);
                    list_excitatory_neurons.push_back(n1);
                }
            }
        }

    }
    neuron_network=k;
}

void Network::add_time_of_spike(double t) {
        time_of_spikes.push_back(t);
    }
void Network::update(double input, double h, double simtime) {
        for (int i = 0; i < list_neurons.size(); ++i) {
            double Input_from_Cext= calcul_poisson();
            list_neurons[i]->charge_J(Input_from_Cext, 14);
            if(list_neurons[i]->get_refractory()) {
                add_time_of_spike(simtime);
                number_of_spike_per_cycle.back()+=1;
                for (int j = 0; j < list_neurons.size(); ++j) {
                    if (neuron_network[i][j] >= 1) {
                        if(list_neurons[i]->get_excitatory()) {
                            list_neurons[j]->charge_J(0.5*neuron_network[i][j],0);
                        }else{
                            list_neurons[j]->charge_J(-0.5*neuron_network[i][j],0);
                        }
                    }
                }
            }
            list_neurons[i]->update(input, h, simtime);
        }
        number_of_spike_per_cycle.push_back(0);
    }


double Network::calcul_poisson() {
    random_device rd;
    mt19937 gen(rd());
    poisson_distribution<> distribution(0.5);
    return distribution(gen);
}
vector<int>Network::get_number_of_spike_per_cycle() const {
    return number_of_spike_per_cycle;
}