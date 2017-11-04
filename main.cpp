#include <iostream>
#include "Neuron.h"
#include "Network.h"
using namespace std;
int main() {
    Network network;
    double sim_time = Simstart;
    do{
        network.update(sim_time);
        sim_time+=h;
    }while(sim_time<Simstop);
    for(int i=0; i<Simstop; ++i){
       for(int j =0 ; j<network.get_spike_neurons()[i].size() ; ++j){
           cout<<i<<endl;
       }
    }
    for(int i=0; i<Simstop; ++i){
        for(int j =0 ; j<network.get_spike_neurons()[i].size() ; ++j){
            cout<<network.get_spike_neurons()[i][j]<<endl;
        }
    }


    return 0;
}