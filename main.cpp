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
    cout<<"done"<<endl;
    for(int i=0; i<network.get_number_of_spike_per_cycle().size(); ++i){
       cout<< network.get_number_of_spike_per_cycle()[i]<<'\n';
    }


    return 0;
}