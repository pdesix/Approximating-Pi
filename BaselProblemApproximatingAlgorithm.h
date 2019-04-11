#pragma once
#include "IApproximatingAlgorithm.h"
#include <cmath>

class BaselProblemApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~BaselProblemApproximatingAlgorithm() = default;
};