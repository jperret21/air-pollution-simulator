#include "gtest/gtest.h"
#include "particle.h"


TEST(MainFunctionTest,InitParticlesTest)
{
  particle p = particle();
  p.initParticle();
}


TEST(MainFunctionTest,PrintParticlesTest)
{
  particle p = particle();
  p.particlePrint(2.0);
}
