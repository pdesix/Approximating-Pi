#pragma once
#include "IApproximatingAlgorithm.h"
class FactorialApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
	double factorial(int n) const;
	double double_factorial(int n) const;

public:
	virtual double approximate_pi(int accuracy_level) const;
};