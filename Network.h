//
// Created by Ludovic Delisle on 10/9/17.
//
#include <vector>
#include "Neuron.h"
#include <random>
#ifndef NEURONS_NETWORK_H
#define NEURONS_NETWORK_H


class Network {
public:
    ///constructor of the network
    ///@param Ce is the number of excitatory neuron
    ///@param Ci is the number of inhibitory neuron
    Network(int Ce, int Ci);


    ///when a neuron does a spike, the time at which it occurred is stored in the vector time_of_spike
    ///@param t is the time at which the spike occurred
    void add_time_of_spike(double t);




    ///at the end of each step the number of spikes that occurred during that time interval is kept in a vector number_of_spike_per_cycle
    ///@return the vector that keeps the number of spike that occurred during each cycle
    vector<int>get_number_of_spike_per_cycle()const;


    ///manages all the neuron in the network, updates and charges them
    ///@param input is the charge received from outside the network that is then used in the update method of the neurons
    ///@param h is the time interval of each step
    ///@param simtime is the actual time of the simulation
    void update(double input, double h, double simtime);
private:
    ///vector with pointers on every neuron in the network
    vector<Neuron*> list_neurons;

    ///vector with pointers on every inhibitory neuron in the network
    vector<Neuron*> list_inhibitory_neurons;

    ///vector with pointers on every excitatory neuron in the network
    vector<Neuron*> list_excitatory_neurons;

    ///vector with all the time at which a spike occurred
    vector<double> time_of_spikes;

    ///vector with the number of spike that occured during each cycle
    vector<int> number_of_spike_per_cycle;

    ///vector of vector that contains integers that shows the links between the neurons
    vector<vector<int>> neuron_network;

    ///utility: calculates the poisson distribution of the background noise
    ///@return the background noise
    double calcul_poisson();
};


#endif //NEURONS_NETWORK_H
