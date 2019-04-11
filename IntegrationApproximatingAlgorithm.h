#pragma once
#include "IApproximatingAlgorithm.h"
class IntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~IntegrationApproximatingAlgorithm() = default;
};

