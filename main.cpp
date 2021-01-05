#include <iostream>
#include <memory>
#include <string>
#include "particles.h"
#include "Simulator.h"


int main()
{
  // create simulator


  Simulator* test= new SteadySimulator();
  test->compute(5);
  //particles* p= new particles();
  //p->initParticles(10);


}
