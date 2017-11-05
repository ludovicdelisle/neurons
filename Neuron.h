//
// Created by Ludovic Delisle on 10/2/17.
//
#include <vector>
#include <cmath>
#include <array>
#include "Constant.h"

#ifndef NEURONS_NEURON_H
#define NEURONS_NEURON_H


using namespace std;
class Network;

class Neuron {

public:

    /// constructor of a neuron
    Neuron();

    /// constructor for the unittest when poisson cannot be used
    Neuron(bool poi);

    /// updates the membrane potential of the neuron and "informs" its network when it spikes
    /// @param input is the energy received from outside the network
    /// @return if the neuron is refractory or not
    bool update(double input);

    /// calculate the new membrane potential, if there is no input, the value of the potential should decrease
    /// @param input is the energy received from outside the network
    /// @return : the new value of the potential
    double new_potential_calcul(double input);


    /// when a neuron has a spike, it gives a charge to the next ones via this method
    /// @param input is the charge that this neuron receives
    /// @param delay is the time it will take until this neuron receives the charge. note that here the time is reversed, 15 is the minimum time and 0 is 15 steps
    void charge_J(double const& input, int const& delay);


    ///rotates the vector that is the buffer
    void set_buffer();

    ///@param the membrane potential of the neuron
    double const get_potential();


private:

    ///becomes true when the neuron reaches it's potential
    ///when true, the method update will then generate a spike and it will become false again
    bool refractory=false;

    double potential_V=0;

    ///buffer of the neuron, when it is charged by another neuron, the charge is added in the first case. It rotates and when it reaches the 15th case the charge is used in the calcul of the potential
    array<double, 15> buffer={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    ///calculate the poisson distribution of the charge that is recieved from outside the network
    double calcul_poisson()const;

    ///after a neuron is refractory it takes 2 time step to update the membrane potential again
    int refractory_clock=2;

    bool poisson=true;
};


#endif //NEURONS_NEURON_H
