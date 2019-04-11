#include "ApproximationController.h"
#include "BaselProblemApproximatingAlgorithm.h"
#include "FactorialApproximatingAlgorithm.h"
#include "MonteCarloApproximatingAlgorithm.h"
#include "IntegrationApproximatingAlgorithm.h"
#include "WallisProductApproximatingAlgorithm.h"
#include "LeibnizFormulaApproximatingAlgorithm.h"
#include "HalfCircleAreaIntegrationApproximatingAlgorithm.h"

ApproximationController::ApproximationController()
{
	algorithms.emplace_back(new BaselProblemApproximatingAlgorithm());
	algorithms.emplace_back(new FactorialApproximatingAlgorithm());
	algorithms.emplace_back(new MonteCarloApproximatingAlgorithm());
	algorithms.emplace_back(new IntegrationApproximatingAlgorithm());
	algorithms.emplace_back(new WallisProductApproximatingAlgorithm());
	algorithms.emplace_back(new LeibnizFormulaApproximatingAlgorithm());
	algorithms.emplace_back(new HalfCircleAreaIntegrationApproximatingAlgorithm());
}

double ApproximationController::approximate_pi(int accuracy_level, const ApproximationController::ApproximatingAlgorithm&algorithm) const
{
	return (*algorithms[static_cast<int>(algorithm)])(accuracy_level);
}
int ApproximationController::implemented_algorithms_count() const
{
	return algorithms.size();
}

ApproximationController & ApproximationController::get_approximation_controller()
{
	static ApproximationController approximating_algorithm;
	return approximating_algorithm;
}

std::vector<std::string> ApproximationController::get_names()
{
	std::vector<std::string> result;
	for (ApproxAlgoPtr& ptr : algorithms)
		result.push_back(ptr->get_name());
	return result;
}