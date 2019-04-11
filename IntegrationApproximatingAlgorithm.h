#pragma once
#include "IApproximatingAlgorithm.h"

/**
	Klasa obliczaj¹ca wartoœæ liczby pi poprzez ca³kê z 4/(1+x^2) na przedziale [0,1], tj. korzystaj¹ca
	z to¿samoœci arctg(1) = pi/4 i wykorzystuj¹ca numeryczn¹ wartoœæ tej ca³ki.
	Klasa korzysta z IntegralUtilities.
*/
class IntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizenie liczby pi poprzez tozsamosc pi/4 = arctg(1) = calka z 1/(1+x^2) na przedziale [0,1] poprzez numeryczne obliczenie calki"; }
	virtual double approximate_pi(int accuracy_level) const;
};

