#include "BaselProblemApproximatingAlgorithm.h"

double BaselProblemApproximatingAlgorithm::approximate_pi(const int & accuracy_level) const
{
	double sum{ 0.0 };
	for (int i{ 1 }; i <= accuracy_level; i++)
		sum += 1.0 / (i*i);
	return std::sqrt(6 * sum);
}