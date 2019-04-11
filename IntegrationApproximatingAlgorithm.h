#pragma once
#include "IApproximatingAlgorithm.h"
class IntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizenie liczby pi poprzez tozsamosc pi/4 = arctg(1) = calka z 1/(1+x^2) na przedziale [0,1] poprzez numeryczne obliczenie calki"; }
	virtual double approximate_pi(int accuracy_level) const;
};

