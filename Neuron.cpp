//
// Created by Ludovic Delisle on 10/2/17.
//

#include "Neuron.h"
#include "Network.h"
Neuron::Neuron(bool e, Network* network){
    excitatory = e;
    my_network=network;
}

bool Neuron::update(double input, double h, double t) {
    if (refractory){
        refractory=false;
        potential_V=new_potential_calcul(input, h);
        set_buffer();
        my_network->add_time_of_spike(t);
        return false;
    }else if(potential_V>=20){
        potential_V=0;
        refractory=true;
        set_buffer();
        return true;
    }else{
        potential_V=new_potential_calcul(input, h);
        set_buffer();
        return false;
    }
}
bool Neuron::get_refractory()const{
    return refractory;
}
double Neuron::new_potential_calcul(double input, double h) {
    double V;
        V = pow(M_E, -h / tao) * potential_V + input * R * (1 - pow(M_E, -h / tao)) + buffer.back();

    return V;
}

void Neuron::charge_J(double input, int delay){
    buffer[delay] += input;
}
void Neuron::set_buffer(){
    for(size_t i = buffer.size()-1; i>0; --i){
       buffer[i]= buffer[i-1];
    }
    buffer[0]=0;
}

bool Neuron::get_excitatory(){
    return excitatory;
}