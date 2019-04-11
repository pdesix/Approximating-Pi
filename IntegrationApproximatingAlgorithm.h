#pragma once
#include "IApproximatingAlgorithm.h"
class IntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(int accuracy_level) const;
};

