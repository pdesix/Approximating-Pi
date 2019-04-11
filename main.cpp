#include "ApplicationController.h"

int main()
{
	// Pobranie singletonu apliakcji i uruchomienie g³ównej procedury
	ApplicationController::get_application_controller().run_app();
}