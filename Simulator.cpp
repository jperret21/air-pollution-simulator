#include "Simulator.h"
#include "particles.h"



void SteadySimulator::compute(int n)
  {
    double t=4;
    p.initParticles(n);
    p.computeParticlesEvolution(t);
    p.particlesPrint(t);
  }




void UnsteadySimulator::compute(int n)
{
  double t=4;
  p.initParticles(n);

  for(double i=0; i<t; i=i+0.5)
  {
    p.computeParticlesEvolution(i);
    p.particlesPrint(i);
  }
 }
