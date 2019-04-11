#pragma once
#include "ConsoleManager.h"
#include "ApproximationController.h"

/**
	Klasa g³ówna, steruj¹ca programem. Implementuje wzorzec projektowy singleton.
*/
class ApplicationController
{
	ApplicationController();
	ApplicationController(ApplicationController&&) = delete;
	ApplicationController(const ApplicationController&) = delete;

	ConsoleManager& console; // Manager wyjœcia
	ApproximationController& approximator; // Manager algorytmów aproksymuj¹cych
public:
	static ApplicationController& get_application_controller();
	void run_app() const; // Metoda kontroluj¹ca przebieg programu
};