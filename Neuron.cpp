//
// Created by Ludovic Delisle on 10/2/17.
//
#include <iostream>
#include "Neuron.h"
#include "Network.h"
Neuron::Neuron(){

}
Neuron::Neuron(bool poi){
poisson=poi;
}
bool Neuron::update(double input) {
    if (refractory && refractory_clock==0){
        potential_V=new_potential_calcul(input);
        set_buffer();
        refractory_clock=2;
        refractory=false;
        return false;
    }else if (refractory && refractory_clock!=0){
        refractory_clock--;
        set_buffer();
        return false;
    }else if(potential_V>max_membranepotential){
        potential_V=0;
        refractory=true;
        set_buffer();
        return true;
    }else{
        potential_V=new_potential_calcul(input);
        set_buffer();
        return false;
    }
}
double Neuron::new_potential_calcul(double input) {

    long double V (potential_V * c1 + input * c2 + buffer.back() + calcul_poisson());
    return V;
}

void Neuron::charge_J(double const& input, int const& delay){
    buffer[15-delay] += input;
}
void Neuron::set_buffer(){
    for(size_t i = buffer.size()-1; i>0; --i){
       buffer[i]= buffer[i-1];
    }
    buffer[0]=0;
}

double Neuron::calcul_poisson()const {
    double coeff_poisson=0;
    if(poisson){
        coeff_poisson=Je;
    }
    random_device rd;
    mt19937 gen(rd());
    poisson_distribution<> distribution(nu*Ne*h/10*Je);
    return distribution(gen)*coeff_poisson;
}

double const Neuron::get_potential(){
    return potential_V;
}