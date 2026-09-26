#include "SimulatedAnealed.hpp"
#include <iostream>
#include <gtest/gtest.h>

TEST(SimulatedAnnealing_test, InitialPopulation)
{
    SimulatedAnealed SimulatedAnealed("data1.txt", 30, 10, 0.5, 2);
    EXPECT_EQ(SimulatedAnealed.LowTemperature, 10);
    EXPECT_EQ(SimulatedAnealed.Temperature, 30);
    EXPECT_EQ(SimulatedAnealed.Alpha, 0.5);
    EXPECT_EQ(SimulatedAnealed.L, 2);

}
