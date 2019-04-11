#pragma once
#include "IApproximatingAlgorithm.h"
class HalfCircleAreaIntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~HalfCircleAreaIntegrationApproximatingAlgorithm() = default;
};

