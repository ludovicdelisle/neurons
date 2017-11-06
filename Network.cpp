//
// Created by Ludovic Delisle on 10/9/17.
//

#include "Network.h"
using namespace std;

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(0,100);


Network::Network() {
     for (int i = 0; i < Ne + Ni; ++i) {
         for (int j = 0; j < Ne + Ni; ++j) {
             bool again = true;
             while (again) {
                 if (distribution(generator) > (1 - conections) * 100) {
                     tab_target[i].push_back(j);
                 } else {
                     again = false;
                 }
             }
         }
     }
}
void Network::update(double const& simtime) {
    int input = 0;
        for (int i = 0; i < Ne+Ni; ++i) {
            if (list_neurons[i].update(input)) {
                number_of_spike_per_cycle.back() += 1;
                for(int j=0; j<tab_target[i].size(); ++j) {
                    if(i<Ni) {
                        list_neurons[tab_target[i][j]].charge_J(-Ji, delay);
                    }else{
                        list_neurons[tab_target[i][j]].charge_J(Je, delay);
                    }
                }
            }
        }
    number_of_spike_per_cycle.push_back(0);
}
deque<int>Network::get_number_of_spike_per_cycle() const {
    return number_of_spike_per_cycle;
}
