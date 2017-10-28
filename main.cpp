#include <iostream>
#include "Neuron.h"
#include "Network.h"


using namespace std;
int main() {
    int Ce=1000;
    int Ci=250;
    Network network(Ce, Ci);


    int t_stop=20;
    double h=(0.1);
    double sim_time=0;
    do{
        double current_input=0;
        network.update(current_input, h, sim_time);
        sim_time+=h;
    }while(sim_time<t_stop);
    for(int i=0; i<network.get_number_of_spike_per_cycle().size(); ++i){
       cout<< network.get_number_of_spike_per_cycle()[i]<<endl;
    }
    return 0;
}