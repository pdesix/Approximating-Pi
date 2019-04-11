#pragma once
#include <string>

class IApproximatingAlgorithm
{
public:
	virtual ~IApproximatingAlgorithm() = default;

	virtual double approximate_pi(int accuracy_level) const = 0;
	inline virtual std::string get_name() const = 0;
	virtual double operator()(int accuracy_level) const
	{ 
		return approximate_pi(accuracy_level); 
	}
};