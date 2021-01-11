#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include "particles.h"
//#include "GasField.h"



// initisialisation of particule
// 2 case steady and unsteady


void particles::initParticles(int n,GasType gs, double pas)
{
  // creer vecteur de  taille n
  speed = std::vector<double>(n);
  position= std::vector<double>(n);

  std::cout << "Init particles"<<std::endl;
  switch(gs)
  {
    case GasType::steady:
      {

        std::fill(speed.begin(),speed.end(),0);
        std::fill(position.begin(),position.end(),0);
        break;
      }

      case GasType::unsteady:
      {
        std::cout<<"yo"<<std::endl;
        //init position
        double p=2./n;

        int cpt_position=0;
        for (double & val_position: position)
        {
          val_position = -1+cpt_position*p;
          cpt_position++;
          //std::cout<<p<<std::endl;
        }

        // init velocity
        int cpt=0;
        for (double & val_velocity: speed)
        {
          val_velocity=std::sin((std::atan(1)*4)*position[cpt]);
          cpt++;
        }
      }
  }

  //std::for_each(position.cbegin(), position.cend(),[](const double& n){std::cout<<n << std::endl;});
}

// print in file velocitie of particles
void particles::printVelocities(double t)
  {
    // write speed of particule in file
    std::cout<< "-- Export particles velocities at time t= " << t <<" file particles_velocities" <<std::endl;
    std::ofstream file_speed ("particle_speed.dat");
    if (file_speed.is_open())
    {
      auto write_value_speed = [&file_speed](const double& n) { file_speed <<  n << "\n"; };
      std::for_each(speed.cbegin(), speed.cend(), write_value_speed);
      file_speed.close();
    }
   }


// print in file position of particles
void particles::printPosition(double t)
   {
     std::cout<< "-- Export particles velocities at time t= " << t <<" file particles_positions" <<std::endl;
     std::ofstream file_position ("particle_position.dat");
     if (file_position.is_open())
     {
       auto write_value_position = [&file_position](const double& n) { file_position <<  n << "\n"; };
       std::for_each(position.cbegin(), position.cend(), write_value_position);

       file_position.close();
     }
   }



 //dynamic state
  void particles::computeParticlesEvolution(double i,GasType gt)
  {

    switch(gt)
    {
      case(GasType::unsteady):
      {

        double pas= 0.1;
        double temps=0.;

        // calcul de la vitesse et de la nouvelle position
        while( temps < i)
        {
          int cpt_velocity{0};
          int cpt_position{0};

          //calcul de la nouvelle vitesse
          for(double & val_velocity : speed)
          {
            val_velocity=std::sin( (std::atan(1)*4)*position[cpt_velocity]);
            cpt_velocity++;
          }

          // maj de la position
          for (double & val_position: position)
          {
            val_position+= speed[cpt_position]*pas;
            cpt_position++;
          }
          //maj du temps
          temps= temps + pas;
          std::cout << "compute particle evolution at time :" << temps <<  "---" <<std::endl;
          printVelocities(temps);
          printPosition(temps);
        }

        break;
      }

      case(GasType::steady):
      {
        std::fill(speed.begin(),speed.end(),GasField::gas_velocity);
        std::fill(position.begin(),position.end(),GasField::gas_velocity);


        std::cout << "compute particle evolution at time :" << i <<  "---" <<std::endl;

        printVelocities(i);
        printPosition(i);
        break;
      }
    }

  }


// print information about the process
  void particles::particlesPrint(double i)
  {
    std::cout <<"--- print particle positions at time :" << i <<"---" <<std::endl;
  }



//--------- GasField----------//

  int GasField::gas_velocity=1;
