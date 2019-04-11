#pragma once
#include <vector>
#include <memory>
#include "IApproximatingAlgorithm.h"

class ApproximationController
{
	typedef std::unique_ptr<IApproximatingAlgorithm> ApproxAlgoPtr;

	std::vector<ApproxAlgoPtr> algorithms;
	ApproximationController();
	ApproximationController(ApproximationController&&) = delete;
	ApproximationController(const ApproximationController&) = delete;

public:
	enum class ApproximatingAlgorithm
	{
		EulerFormula = 0,
		FactorialIdentity = 1
	};
	
	double approximate_pi(int accuracy_level, const ApproximatingAlgorithm& algorithm = ApproximatingAlgorithm::EulerFormula) const;
	int implemented_algorithms_count() const;
	std::vector<std::string> get_names();
	static ApproximationController& get_approximation_controller();
};