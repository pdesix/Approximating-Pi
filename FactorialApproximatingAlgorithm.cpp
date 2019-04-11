#include "FactorialApproximatingAlgorithm.h"

double FactorialApproximatingAlgorithm::factorial(int n) const
{
	double result{ 1.0 };
	for (int i = 2; i <= n; i ++)
	{
		result *= static_cast<double>(i);
	}
	return result;
}

double FactorialApproximatingAlgorithm::double_factorial(int n) const
{
	double result{ 1.0 };
	for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i+=2)
	{
		result *= static_cast<double>(i);
	}
	return result;
}

double FactorialApproximatingAlgorithm::approximate_pi(int accuracy_level) const
{
	double sum{ 0.0 };
	for(int i{ 0 }; i < accuracy_level; i++)
	{
		sum +=  factorial(i) / double_factorial(2 * i + 1);
	}
	return sum * 2;
}
