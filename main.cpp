#include <iostream>
#include "particles.h"
#include "Simulator.h"
#include <memory>
#include <string>


int main()
{
  // create simulator

  //std::unique_ptr<SteadySimulator> sim1(new SteadySimulator());
   auto sim_steady= new SteadySimulator();

  sim_steady->compute(4);


  //particles* p= new particles();
  //p->initParticles(10);


}
