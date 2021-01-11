#ifndef sim_h
#define sim_h

#include <iostream>
#include <string>
#include "particles.h"


class Simulator
{
  protected:
    GasType type;
    particles p{};
    int n=10;

  public:
    double pas=0.1;
    virtual void compute(int n)=0;
    virtual ~Simulator() = default;

};




//----------------------------------------//
class SteadySimulator: public Simulator
{
  public:
    void compute(int n);
};


//---------------------------------------//
class UnsteadySimulator: public Simulator
{
  public:
    void compute(int n);
};

#endif
