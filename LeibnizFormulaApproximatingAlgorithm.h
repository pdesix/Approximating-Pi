#pragma once
#include "IApproximatingAlgorithm.h"

class LeibnizFormulaApproximatingAlgorithm
	: public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Estymacja liczby pi za pomoca wzoru Leibniza (wzoru Madhava–Leibniza): suma (-1)^n/(2n+1)"; }
	virtual double approximate_pi(int accuracy_level) const;
};