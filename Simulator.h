#ifndef sim_h
#define sim_h

#include <iostream>
#include <string>
#include "particle.h"

class Simulator
{
  protected:
    particle p{};

  public:
    virtual void compute(double t);

};


//----------------------------------------//
class SteadySimulator: public Simulator
{
  public:
    void compute(double t) override;
};


//---------------------------------------//
class UnsteadySimulator: public Simulator
{
  public:
    void compute(double t) override;
};

#endif
