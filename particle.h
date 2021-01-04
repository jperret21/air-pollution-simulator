#ifndef Part_h
#define Part_h
#include <iostream>


#include <string>



class particle
{
  public:
    void initParticle();
    void computeParticleEvolution(double i);
    void particlePrint(double i);
};


#endif
