//
// Created by Ludovic Delisle on 10/29/17.
//

#ifndef NEURONS_CONSTANT_H
#define NEURONS_CONSTANT_H
#include <cmath>

const double Simstart(0); ///beginning of the simulation
const double Simstop(1000); ///number of time steps in the simulation

const double conections(0.1); ///chances of connection between two neurons
const int Ne(10000); ///number of excitatory neurons
const int Ni(2500); /// number of inhibitory neurons

const double h(1); ///time step
const double tao(20);
const double max_membranepotential(20); ///potential at which there is a spike
const double R(20); ///resistance of the membrane


const double coeff_poisson(0.1); ///I multiply by it before I return the poisson distribution instead of by Je because of Gtest reasons
const double Je(0.1);///impulse given by excitatory neurons
const double Ji(-0.5);///impulse given by inhibitory neurons
constexpr int teta (20);
const double nu (2*teta/(tao*Je*Ne*conections));

const double delay(15);///time it takes for the impulse to arrive in the linked neuron

const double c1(exp(-h/(10*tao)));///used to calculate the new potential membrane value
const double c2(R*(1-c1)); ///used to calculate the new potential membrane value




#endif //NEURONS_CONSTANT_H
