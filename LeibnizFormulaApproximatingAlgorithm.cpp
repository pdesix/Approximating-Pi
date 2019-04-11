#include "LeibnizFormulaApproximatingAlgorithm.h"
#include <cmath>

double LeibnizFormulaApproximatingAlgorithm::approximate_pi(const int & accuracy_level) const
{
	double sum{ 0.0 };
	for (int i{ 0 }; i < accuracy_level; i++)
	{
		sum += std::pow(-1.0, i) / (2.0*i + 1.0);
	}
	return 4.0 * sum;
}
