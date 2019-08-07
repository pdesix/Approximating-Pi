#include "pch.h"


TEST(IntegralUtilitiesTest, ConstantFunctions) {
	auto constant_function = [](int val) {
		return [val](int x) -> int { 
			return val; 
		};
	};
	auto constant_double_function = [](double val) {
		return [val](double x) -> double { 
			return val; 
		};
	};

	EXPECT_EQ((IntegralUtilities::just_integrate<int, int>(-10, 10, 1, constant_function(1))), 20) << "Integration of constant int function: x -> 1 with one step has failed";
	EXPECT_EQ((IntegralUtilities::just_integrate<int, int>(0, 10, 8, constant_function(0))), 0) << "Integration of constant int function: x -> 0 with one step has failed";
	EXPECT_FLOAT_EQ((IntegralUtilities::just_integrate<double, double>(0, 10, 18, constant_double_function(3.23))), 32.3) << "Integration of constant double function: x -> 3.23 with eighteen steps has failed";
	EXPECT_FLOAT_EQ((IntegralUtilities::just_integrate<double, double>(0, 10, 6, constant_double_function(0.00))), 0) << "Integration of constant double function: x -> 0 with six steps has failed";
}



/*TEST(IntegralUtilitiesTest, LinearFunctions) {
	auto linear_function = [](double a, double b) {
		return [a, b](double x) -> double {
			return a * x + b;
		};
	};
}*/