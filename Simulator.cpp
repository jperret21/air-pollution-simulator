#include "Simulator.h"
#include "particle.h"


void Simulator::compute(double t)
  {
  }

void SteadySimulator::compute(double t)
  {
    p.initParticle();
    p.computeParticleEvolution(t);
    p.particlePrint(t);
  }


void UnsteadySimulator::compute(double t)
{
  p.initParticle();

  for(double i=0; i<t; i=i+0.5)
  {
    p.computeParticleEvolution(i);
    p.particlePrint(i);
  }
 }
