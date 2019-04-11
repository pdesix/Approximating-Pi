#include "IntegrationApproximatingAlgorithm.h"
#include "IntegralUtilities.h"

double IntegrationApproximatingAlgorithm::approximate_pi(int accuracy_level) const
{
	return  IntegralUtilities::just_integrate<double, double>(0.0, 1.0, accuracy_level, [](double x) {return 4.0 / (1.0 + x * x); });
}
