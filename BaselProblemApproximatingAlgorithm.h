#pragma once
#include "IApproximatingAlgorithm.h"
#include <cmath>

class BaselProblemApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(int accuracy_level) const;
};