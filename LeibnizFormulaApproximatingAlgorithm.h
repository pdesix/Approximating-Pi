#pragma once
class LeibnizFormulaApproximatingAlgorithm
{
public:
	virtual double approximate_pi(const int& accuracy_level) const;
	virtual ~LeibnizFormulaApproximatingAlgorithm() = default;
};