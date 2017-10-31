//
// Created by Ludovic Delisle on 10/29/17.
//

#ifndef NEURONS_CONSTANT_H
#define NEURONS_CONSTANT_H
#include <cmath>

const double Simstart(0);
const double Simstop(1000);

const double conections(0.1);
const int Ce(10000);
const int Ci(2500);
const int C_ext(Ce);


const double input(0);
const double h(1);
const double tao(20);
const double max_membranepotential(20.0);
const double R(20);


const double Espike(0.1);
const double Ispike(-0.5);


const double delay(1.5);

const double c1(exp(-h/tao));
const double c2(R*(1-c1));



#endif //NEURONS_CONSTANT_H
