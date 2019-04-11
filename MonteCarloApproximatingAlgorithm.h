#pragma once
#include "IApproximatingAlgorithm.h"
#include <random>

class MonteCarloApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~MonteCarloApproximatingAlgorithm() = default;
};

