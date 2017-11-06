//
// Created by Ludovic Delisle on 10/9/17.
//
#include <vector>
#include <deque>
#include "Neuron.h"
#include <random>
#include "Constant.h"
#ifndef NEURONS_NETWORK_H
#define NEURONS_NETWORK_H

class Network {
public:
    ///constructor of the network
    Network();

    ///at the end of each step the number of spikes that occurred during that time interval is kept in a vector number_of_spike_per_cycle
    ///@return the vector that keeps the number of spike that occurred during each cycle
    deque<int>get_number_of_spike_per_cycle()const;


    ///manages all the neuron in the network, updates and charges them
    ///@param simtime is the actual time of the simulation
    void update(double const& simtime);

private:
    ///vector with pointers on every neuron in the network
    array<Neuron, Ne+Ni> list_neurons;

    ///vector with the number of spike that occured during each cycle
    deque<int> number_of_spike_per_cycle;

    ///array of deque that contains each neuron's conections
    array<deque<int>, Ne+Ni> tab_target;
};

#endif //NEURONS_NETWORK_H
