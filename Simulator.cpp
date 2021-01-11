#include "Simulator.h"
#include "particles.h"



void SteadySimulator::compute(int n)
  {
    double t=1;

    p.initParticles(n,GasType::steady,pas);
    p.computeParticlesEvolution(t,GasType::steady);
    p.particlesPrint(t);

    //p.printVelocities(t);
    //p.printPosition(t);
  }




void UnsteadySimulator::compute(int n)
{
  double t=1;
  p.initParticles(n,GasType::unsteady,pas);
  p.computeParticlesEvolution(t,GasType::unsteady);

  //p.printVelocities(t);
  //p.printPosition(t);
//p.particlesPrint(t);
}
