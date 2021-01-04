#include <iostream>
#include "particle.h"
#include "Simulator.h"


int main()
{
  // create simulator

  SteadySimulator sim1 = SteadySimulator();
  UnsteadySimulator sim2 = UnsteadySimulator();

  sim1.compute(1);
  sim2.compute(3);
}
