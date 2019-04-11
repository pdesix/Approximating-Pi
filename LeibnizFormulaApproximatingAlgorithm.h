#pragma once
#include "IApproximatingAlgorithm.h"

/**
	Klasa wyznaczaj¹ca wartoœæ liczby pi za pomoc¹ wzoru Leibniza: \sum_{n=0}^{\infty} \frac{(-1)^n}{2n+1}
*/
class LeibnizFormulaApproximatingAlgorithm
	: public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Estymacja liczby pi za pomoca wzoru Leibniza (wzoru Madhava–Leibniza): suma (-1)^n/(2n+1)"; }
	virtual double approximate_pi(int accuracy_level) const;
};