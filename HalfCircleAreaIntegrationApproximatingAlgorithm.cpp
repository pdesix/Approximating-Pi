#include "HalfCircleAreaIntegrationApproximatingAlgorithm.h"
#include "IntegralUtilities.h"
#include <cmath>

double HalfCircleAreaIntegrationApproximatingAlgorithm::approximate_pi(int accuracy_level) const
{
	return 2.0*IntegralUtilities::just_integrate<double, double>(-1, 1, accuracy_level, [](double x) { return std::sqrt(1 - std::pow(x, 2)); });
}