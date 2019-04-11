#pragma once
#include "IApproximatingAlgorithm.h"
#include <random>

class MonteCarloApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizone obliczenie liczby pi poprzez zastosowanie metody Monte-Carlo"; }
	virtual double approximate_pi(int accuracy_level) const;
};