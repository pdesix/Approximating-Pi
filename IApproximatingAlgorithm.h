#pragma once
class IApproximatingAlgorithm
{
public:
	virtual ~IApproximatingAlgorithm() = default;

	virtual double approximate_pi(const int& accuracy_level) const = 0;
	virtual double operator()(const int& accuracy_level) const
	{ 
		return approximate_pi(accuracy_level); 
	}
};