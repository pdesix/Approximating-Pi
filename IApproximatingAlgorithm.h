#pragma once
#include <string>

/**
	Interfejs ujednolicaj¹cy wszystkie algorytmy.
*/
class IApproximatingAlgorithm
{
public:
	virtual ~IApproximatingAlgorithm() = default; // Polimorfizm itp

	virtual double approximate_pi(int accuracy_level) const = 0; // W³aœciwa metoda s³u¿¹ca do obliczania wartoœci liczby pi
	inline virtual std::string get_name() const = 0; // Metoda zwracaj¹ca nazwê danego algorytmu
	virtual double operator()(int accuracy_level) const
	{ 
		return approximate_pi(accuracy_level); 
	}
};