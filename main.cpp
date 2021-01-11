#include <iostream>
#include <memory>
#include <cstring>
#include "particles.h"
#include "Simulator.h"


int main(int argc, char**argv)
{
  // create simulator

  //GasType user_choice_gas= GasType::unsteady;
  char* user_choice_gas= argv[1];
  int user_size=atoi(argv[2]);


  if (strcmp(user_choice_gas, "steady") == 0)
  {
    Simulator* sim= new SteadySimulator();
    sim->compute(user_size);
  }

  else if (strcmp(user_choice_gas, "unsteady") == 0)
  {
    Simulator* sim= new UnsteadySimulator();
    sim->compute( user_size);

  }


}
