#pragma once
#include "IApproximatingAlgorithm.h"
#include <cmath>

/**
	Algorytm obliczaj¹cy przybli¿on¹ wartoœæ liczby pi za pomoc¹ to¿samoœci odkrytej przez Eulera
	znanej jako problem bazylejski - \frac{\pi^2}{6} = \sum_{n=0}^{\infty}
*/
class BaselProblemApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Aproksymacja liczby pi za pomoca sumy odwrotnosci kwadratow kolejnych liczb naturalnych"; }
	virtual double approximate_pi(int accuracy_level) const;
};