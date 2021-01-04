#include "gtest/gtest.h"
#include "particles.h"


TEST(MainFunctionTest,InitParticlesTest)
{
  particles p = particles();
  p.initParticles(10);
}


TEST(MainFunctionTest,PrintParticlesTest)
{
  particles p = particles();
  p.particlesPrint(2.0);
}
