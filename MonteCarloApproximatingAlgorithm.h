#pragma once
#include "IApproximatingAlgorithm.h"
#include <random>

class MonteCarloApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(int accuracy_level) const;
};

