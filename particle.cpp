#include <iostream>
#include <string>
#include "particle.h"



void particle::initParticle()
{
  std::cout << "--- init particles ---" << std::endl;
}


  void particle::computeParticleEvolution(double i)
  {
    std::cout << "compute particle evolution at time :" << i <<  "---" <<std::endl;
  }

  void particle::particlePrint(double i)
  {
    std::cout <<"--- print particle positions at time :" << i <<"---" <<std::endl;
  }
