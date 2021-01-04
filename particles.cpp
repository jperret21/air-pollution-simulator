#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include "particles.h"
#include <vector>



void particles::initParticles(int n)
{
 // creer vecteur de  taille n
  speed = std::vector<double>(n);
  position= std::vector<double>(n);

  std::fill(speed.begin(),speed.end(),0);
  std::fill(position.begin(),position.end(),0);


  // write speed of particule in file
  std::ofstream file_speed ("particle_speed.dat");
  if (file_speed.is_open())
  {
     auto write_value_speed = [&file_speed](const double& n) { file_speed <<  n << "\n"; };
     std::for_each(speed.cbegin(), speed.cend(), write_value_speed);
     file_speed.close();
  }

  // write position of particule in file
  std::ofstream file_position ("particle_position.dat");
  if (file_position.is_open())
  {
     auto write_value_position = [&file_position](const double& n) { file_position <<  n << "\n"; };
     std::for_each(position.cbegin(), position.cend(), write_value_position);
     file_position.close();
  }


}

  void particles::computeParticlesEvolution(double i)
  {
    std::cout << "compute particle evolution at time :" << i <<  "---" <<std::endl;
  }

  void particles::particlesPrint(double i)
  {
    std::cout <<"--- print particle positions at time :" << i <<"---" <<std::endl;
  }
