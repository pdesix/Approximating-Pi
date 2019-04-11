#pragma once
#include "IApproximatingAlgorithm.h"
/**
	Klasa realizuj¹ca wyznaczanie liczby pi poprzez to¿samoœæ: \pi ~ \sum_{n=0}^{\infty} \frac{n!}{(2n+1)!!}
*/
class FactorialApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
	double factorial(int n) const;
	double double_factorial(int n) const;

public:
	inline virtual std::string get_name() const { return "Aproksymacja liczby pi za pomoca tozsamosci zwiazanej z silnia i podwojna silnia"; }
	virtual double approximate_pi(int accuracy_level) const;
};