//
// Created by Ludovic Delisle on 10/28/17.
//

#include <iostream>
#include "Neuron.h"
#include "Network.h"
#include "googletest/include/gtest/gtest.h"

using namespace std;

///create a neuron and updates it until it has 4 spikes, each time of spike is registered and tested at the end
TEST (Test_time_spike, spike_time) {
Neuron n1(false);
vector <int>time_of_spike;
    double input (1.01);
double sim_time = Simstart;
do{
if (n1.update(input)){
time_of_spike.push_back(sim_time);
}
sim_time += h/10;
}while(time_of_spike.size()<4);
EXPECT_EQ(time_of_spike[0], 92);
EXPECT_EQ(time_of_spike[1], 185);
EXPECT_EQ(time_of_spike[2], 277);
EXPECT_EQ(time_of_spike[3], 370);
}
///create 2 neurons one will spike and is linked to the other at the end the potential of the second neuron should have changed and there must not be any delay
TEST(two_neurons, without_delay){
    Neuron n1(false);
    Neuron n2(false);
    bool sent=false;
    int delay_test=0;
    double input (1.01);
    do{
        if (n1.update(input)){
            n2.charge_J(Je, 1);
            sent=true;
        }
        if(sent){
            delay_test+=1;
        }
        n2.update(0);
    }while(n2.get_potential()==0);
    EXPECT_EQ(delay_test, 1);
    EXPECT_EQ(n2.get_potential(), Je);


}
///same test than before but with delay

TEST(neurons, with_delay){
    Neuron n1(false);
    Neuron n2(false);
    bool sent=false;
    int delay_test=0;
    double input (1.01);
    do{
        if (n1.update(input)){
            n2.charge_J(Je, 15);
            sent=true;
        }
        if(sent){
            delay_test+=1;
        }
        n2.update(0);
    }while(n2.get_potential()==0);
    EXPECT_EQ(delay_test, delay);
    EXPECT_EQ(n2.get_potential(), Je);


}
///test if the average number of spike per step is around 40

TEST(network, average_spike){
    Network network;
    int sim_time = Simstart;
    do{
        network.update(sim_time);
        sim_time+=h;
    }while(sim_time<Simstop);
    double average=0;
    for(int i=0; i<Simstop; ++i ){
        average+=network.get_number_of_spike_per_cycle()[i]/Simstop;
    }
    EXPECT_LT(average, 45);
    EXPECT_GT(average, 35);


}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
