#pragma once
#include "IApproximatingAlgorithm.h"
class HalfCircleAreaIntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Numeryczne obliczenie pola polkola (jako wykresu funkcji sqrt(1-x^2) i wyznaczenie liczby pi"; }
	virtual double approximate_pi(int accuracy_level) const;
};