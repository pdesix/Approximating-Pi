#include "ApplicationController.h"

int main()
{
	// Pobranie singletonu apliakcji i uruchomienie g³ównej procedury. W pliku nag³ówkowym klasy ApplicationController dalsze komentarze
	ApplicationController::get_application_controller().run_app();
}