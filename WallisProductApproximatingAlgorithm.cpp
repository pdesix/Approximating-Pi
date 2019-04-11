#include "WallisProductApproximatingAlgorithm.h"

double WallisProductApproximatingAlgorithm::approximate_pi(const int & accuracy_level) const
{
	double product_value{ 1.0 }, up{ 2.0 }, denominator{ 1.0 };
	for (int i{ 0 }; i < accuracy_level; i+=2)
	{
		product_value *= (up*up) / (denominator*denominator);
		up += 2;
		denominator += 2;
	}
	return product_value;
}
