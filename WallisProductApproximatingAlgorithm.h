#pragma once
#include "IApproximatingAlgorithm.h"
class WallisProductApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~WallisProductApproximatingAlgorithm() = default;
};

