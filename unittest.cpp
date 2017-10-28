//
// Created by Ludovic Delisle on 10/28/17.
//

#include <iostream>
#include <cmath>
#include "Neuron.h"
#include "Network.h"
#include "gtest/googletest/include/gtest/gtest.h"

using namespace std;

TEST (nom1, nom2) {
EXPECT_EQ(1,1);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}