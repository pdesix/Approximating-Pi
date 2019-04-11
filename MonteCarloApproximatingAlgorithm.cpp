#include "MonteCarloApproximatingAlgorithm.h"

double MonteCarloApproximatingAlgorithm::approximate_pi(int accuracy_level) const
{
	std::default_random_engine random_engine;
	std::uniform_real_distribution<double> distribution;
	const int n{ accuracy_level * 150 };
	double x, y;
	int points_in_circle{ 0 };
	for (int i{ 0 }; i < n; i++)
	{
		x = distribution(random_engine);
		y = distribution(random_engine);
		if (x*x + y * y <= 1)
			points_in_circle++;
	}
	return 4 * points_in_circle;
}
