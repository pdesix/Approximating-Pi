#pragma once
#include "IApproximatingAlgorithm.h"

/**
	Klasa wykorzystuj¹ca wzór Wallisa do oszacowania wartoœci liczby pi.
*/
class WallisProductApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Wykorzystanie wzoru Wallisa do oszacowania wartosci pi"; }
	virtual double approximate_pi(int accuracy_level) const;
};