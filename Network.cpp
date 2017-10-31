//
// Created by Ludovic Delisle on 10/9/17.
//

#include "Network.h"
#include <iostream>
#include <chrono>
#include <ctime>


using namespace std;

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(0,100);


Network::Network() {
     for (int i = 0; i < Ce + Ci; ++i) {
         for (int j = 0; j < Ce + Ci; ++j) {
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
    cout<<"network created"<<endl;
}

void Network::add_time_of_spike(double const& t) {
        time_of_spikes.push_back(t);
    }

void Network::update(double const& simtime) {
        for (int i = 0; i < list_neurons.size(); ++i) {
            if (list_neurons[i].update()) {
                add_time_of_spike(simtime);
                number_of_spike_per_cycle.back() += 1;
                for(int j=0; j<tab_target[i].size(); ++j) {
                    if(i<Ce) {
                        list_neurons[j].charge_J(0.1, 0);
                    }else{
                        list_neurons[j].charge_J(-0.5, 0);
                    }
                }
            }
        }
    number_of_spike_per_cycle.push_back(0);
}


deque<int>Network::get_number_of_spike_per_cycle() const {
    return number_of_spike_per_cycle;
}

