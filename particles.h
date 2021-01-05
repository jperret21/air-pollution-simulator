#ifndef Part_h
#define Part_h
#include <iostream>
#include <string>
#include <vector>
#include "GasField.h"



class particles
{
  public:
    void initParticles(int n);
    void computeParticlesEvolution(double i);
    void particlesPrint(double i);
    void printVelocities();
    void printPosition();


  private:
    std::vector<double> speed;
    std::vector<double> position;

};


#endif
