#ifndef Part_h
#define Part_h
#include <iostream>
#include <string>
#include <vector>
//#include "GasField.h"


class particles
{
  public:
    void initParticles(int n);
    void computeParticlesEvolution(double i);
    void particlesPrint(double i);
    void printVelocities(int t);
    void printPosition(int t);


  private:
    std::vector<double> speed;
    std::vector<double> position;

};


class GasField
{
public:
  static int  gas_velocity;

};

#endif
