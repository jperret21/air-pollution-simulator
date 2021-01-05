#include <iostream>
#include <memory>
#include <string>
#include "particles.h"
#include "Simulator.h"


int main()
{
  // create simulator

  //std::unique_ptr<Simulator> sim_steady(new SteadySimulator());
  //Simulator* sim_steady= new SteadySimulator();
  //sim_steady->compute(4);

  //auto sim_steady = std::make_unique<SteadySimulator>;

  particles* p= new particles();
  p->initParticles(10);


}
