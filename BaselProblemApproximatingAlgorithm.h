#pragma once
#include "IApproximatingAlgorithm.h"
#include <cmath>

class BaselProblemApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Aproksymacja liczby pi za pomoca sumy odwrotnosci kwadratow kolejnych liczb naturalnych"; }
	virtual double approximate_pi(int accuracy_level) const;
};