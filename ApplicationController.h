#pragma once
#include "ConsoleManager.h"
#include "ApproximationController.h"

class ApplicationController
{
	ApplicationController();
	ApplicationController(ApplicationController&&) = delete;
	ApplicationController(const ApplicationController&) = delete;

	ConsoleManager& console;
	ApproximationController& approximator;
public:
	static ApplicationController& get_application_controller();
	void run_app() const;
};

