#ifndef Part_h
#define Part_h
#include <iostream>
#include <string>
#include <vector>

enum class GasType {steady,unsteady};

class GasField
{
  public:
    static int  gas_velocity;

};

class particles
{
  public:
    void initParticles(int n,GasType gs,double pas);
    void computeParticlesEvolution(double i,GasType gf);
    void particlesPrint(double i);
    void printVelocities(double t);
    void printPosition(double t);

  private:
    std::vector<double> speed;
    std::vector<double> position;
};



#endif
