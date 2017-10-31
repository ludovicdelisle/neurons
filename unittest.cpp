//
// Created by Ludovic Delisle on 10/28/17.
//

#include <iostream>
#include <cmath>
#include "Neuron.h"
#include "Network.h"
#include <vector>
#include "googletest/include/gtest/gtest.h"

using namespace std;

//create a neuron and updates it until it has 4 spikes, each time of spike is registered and tested at the end
TEST (Test_time_spike, spike_time) {
Neuron n1;
vector <double>time_of_spike;
double sim_time = Simstart;
do{
if (n1.update(1.01, sim_time)){
time_of_spike.push_back(sim_time);
}
sim_time += h;
}while(time_of_spike.size()<4);
EXPECT_EQ(time_of_spike[0], 93);
EXPECT_EQ(time_of_spike[1], 187);
EXPECT_EQ(time_of_spike[2], 281);
EXPECT_EQ(time_of_spike[3], 375);
}

TEST (linked_neurons, delay){


}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}