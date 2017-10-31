//
// Created by Ludovic Delisle on 10/2/17.
//
#include <iostream>
#include "Neuron.h"
#include "Network.h"
Neuron::Neuron(){

}

bool Neuron::update() {
    if (refractory){
        refractory=false;
        potential_V=new_potential_calcul();
        set_buffer();
        return false;
    }else if(potential_V>max_membranepotential){
        potential_V=0;
        refractory=true;
        set_buffer();
        return true;
    }else{
        potential_V=new_potential_calcul();
        set_buffer();
        return false;
    }
}
bool Neuron::get_refractory()const{
    return refractory;
}
double Neuron::new_potential_calcul() {
    long double V;
        V = potential_V = potential_V * c1 + input * c2 + buffer.back() + calcul_poisson();
    return V;
}

void Neuron::charge_J(double const& input, int const& delay){
    buffer[delay] += input;
}
void Neuron::set_buffer(){
    for(size_t i = buffer.size()-1; i>0; --i){
       buffer[i]= buffer[i-1];
    }
    buffer[0]=0;
}

double Neuron::calcul_poisson()const {
    random_device rd;
    mt19937 gen(rd());
    poisson_distribution<> distribution(2);
    return distribution(gen)*0.402;
}