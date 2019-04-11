#pragma once
#include "IApproximatingAlgorithm.h"
class FactorialApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
	double factorial(const int& n) const;
	double double_factorial(const int& n) const;

public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~FactorialApproximatingAlgorithm() = default;
};

