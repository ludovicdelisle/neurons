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
    ///@param Ce is the number of excitatory neuron
    ///@param Ci is the number of inhibitory neuron
    Network();


    ///when a neuron does a spike, the time at which it occurred is stored in the vector time_of_spike
    ///@param t is the time at which the spike occurred
    void add_time_of_spike(double const& t);


    ///at the end of each step the number of spikes that occurred during that time interval is kept in a vector number_of_spike_per_cycle
    ///@return the vector that keeps the number of spike that occurred during each cycle
    deque<int>get_number_of_spike_per_cycle()const;


    ///manages all the neuron in the network, updates and charges them
    ///@param input is the charge received from outside the network that is then used in the update method of the neurons
    ///@param h is the time interval of each step
    ///@param simtime is the actual time of the simulation
    void update(double const& simtime);

private:
    ///vector with pointers on every neuron in the network
    array<Neuron, Ce+Ci> list_neurons;

    ///vector with all the time at which a spike occurred
    deque<double> time_of_spikes;

    ///vector with the number of spike that occured during each cycle
    deque<int> number_of_spike_per_cycle;

    array<deque<int>, Ce+Ci> tab_target;
};


#endif //NEURONS_NETWORK_H
