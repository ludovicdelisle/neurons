#include <iostream>
#include "Neuron.h"
#include "Network.h"
using namespace std;
int main() {
    Network network;
    int sim_time = Simstart;
    do{
        network.update(sim_time);
        sim_time+=h;
    }while(sim_time<Simstop);
    return 0;
}