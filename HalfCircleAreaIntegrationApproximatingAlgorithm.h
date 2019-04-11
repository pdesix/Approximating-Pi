#pragma once
#include "IApproximatingAlgorithm.h"
/**
	Klasa wyznaczaj¹ca przybli¿on¹ wartoœæ liczby pi poprzez obliczenie pola pó³okrêgu i wyznaczenie z niego liczby pi.
	Pole pó³okrêgu jest realizowane jako wartoœæ ca³ki z funkcji sqrt(1-x^2) na przedziale [-1,1].
	Klasa korzysta z IntegralUtilities.
*/
class HalfCircleAreaIntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Numeryczne obliczenie pola polkola (jako wykresu funkcji sqrt(1-x^2) i wyznaczenie liczby pi"; }
	virtual double approximate_pi(int accuracy_level) const;
};