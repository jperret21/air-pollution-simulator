#import"UnsteadyGasField.h"
#include <cmath>


int UnsteadyGAsField::gas_velocity = 2.5;

double UnsteadyGasField::velocity(double position)
{
    double val_velocity=std::sin( (std::atan(1)*4)*position[cpt_velocity]);

    return val_velicity;
  }
}
