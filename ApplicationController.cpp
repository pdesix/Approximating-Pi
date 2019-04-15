#include "ApplicationController.h"

ApplicationController::ApplicationController()
	: console{ ConsoleManager::get_console_manager() }, approximator{ ApproximationController::get_approximation_controller() }
{
}

ApplicationController& ApplicationController::get_application_controller()
{
	static ApplicationController app_controller;
	return app_controller;
}

void ApplicationController::run_app() const
{
	int option{ console.show_menu(approximator.get_names()) };
	while (option > 0)
	{
		const int n{ console.get_accuracy() };
		if (option > approximator.implemented_algorithms_count())
		{
			console.show_error("Niepoprawny wybor");
			return;
		}
		const double result{ approximator.approximate_pi(n, option-1) };
		console.update_result(result);
		option = console.show_menu(approximator.get_names());
	}
}