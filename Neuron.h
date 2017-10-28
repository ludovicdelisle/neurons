//
// Created by Ludovic Delisle on 10/2/17.
//
#include <vector>
#include <cmath>
#include <array>

#ifndef NEURONS_NEURON_H
#define NEURONS_NEURON_H


using namespace std;
class Network;
class Neuron {

public:

    /// constructor of a neuron
    /// @param e is a boolean that say if it is excitatory or inhibitory.
    /// @param network is the network in which the neuron is
    Neuron(bool e, Network* network);


    /// updates the membrane potential of the neuron and "informs" its network when it spikes
    /// @param input is the energy received from outside the network
    /// @param h is the time a step takes, t is the time of the simulation
    /// @return if the neuron is refractory or not
    bool update(double input, double h, double t);


    /// @return the boolean refractory
    bool get_refractory()const;


    /// calculate the new membrane potential, if there is no input, the value of the potential should decrease
    /// @param input is the energy received from outside the network
    /// @param h is the time a step takes
    /// @return : the new value of the potential
    double new_potential_calcul(double input, double h);


    /// when a neuron has a spike, it gives a charge to the next ones via this method
    /// @param input is the charge that this neuron receives
    /// @param delay is the time it will take until this neuron receives the charge. note that here the time is reversed, 15 is the minimum time and 0 is 15 steps
    void charge_J(double input, int delay);


    ///rotates the vector that is the buffer
    void set_buffer();


    ///@return the boolean excitatory which is decided in the constructor
    bool get_excitatory();



private:

    ///non-excitatory neurons will send a negative charge when reaching their spike
    ///this variable is set in the constructor and cannot be changed afterwards
    bool excitatory;


    ///becomes true when the neuron reaches it's potential
    ///when true, the method update will then generate a spike and it will become false again
    bool refractory=false;


    ///it changes at each step, when it reaches >20 the neuron becomes refractory
    double potential_V=0;
    double tao = 20;
    double R=20;


    ///this is the network in which this neuron is
    ///this variable is set in the constructor and cannot be changed afterwards
    Network* my_network;


    ///buffer of the neuron, when it is charged by another neuron, the charge is added in the first case. It rotates and when it reaches the 15th case the charge is used in the calcul of the potential
    array<double, 15> buffer={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
};


#endif //NEURONS_NEURON_H
