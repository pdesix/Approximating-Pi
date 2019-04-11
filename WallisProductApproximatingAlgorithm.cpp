#include "WallisProductApproximatingAlgorithm.h"

double WallisProductApproximatingAlgorithm::approximate_pi(int accuracy_level) const
{
	double product_value{ 1.0 }, up{ 2.0 }, denominator{ 1.0 };
	for (int i{ 0 }; i < accuracy_level; i+=1)
	{
		product_value *= up / denominator;
		if (i % 2 == 0)
			denominator += 2;
		else up += 2;
	}
	return 2.0*product_value;
}
