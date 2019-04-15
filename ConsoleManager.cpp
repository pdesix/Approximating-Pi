#include "ConsoleManager.h"

ConsoleManager& ConsoleManager::get_console_manager()
{
	static ConsoleManager console_manager;
	return console_manager;
}

int ConsoleManager::show_menu(std::vector<std::string> algorithm_names) const
{
	int option{ 0 };
	std::cout << "0. Wyjscie z programu\n";
	for (int i = 1; i <= algorithm_names.size(); i++)
		std::cout << i << ". " << algorithm_names[i-1] << "\n";
	std::cout << "Wybor: ";
	std::cin >> option;
	while(!std::cin.good() || option < 0)
	{
		std::cout << "Cos poszlo nie tak... Prawdopodobnie wprowadziles niepoprawna wartosc. Sprobuj ponownie.\nWybor: ";
		std::cin.clear();
		std::cin.ignore(123,static_cast<int>('\n'));
		std::cin >> option;
	}
	return option;
}

int ConsoleManager::get_accuracy() const
{ 
	int accuracy;
	std::cout << "Wprowadz liczbe calkowita - stopien dokladnosci obliczen: ";
	std::cin >> accuracy;
	while (!std::cin.good() || accuracy < 0)
	{
		std::cout << "Cos poszlo nie tak... Prawdopodobnie wprowadziles niepoprawna wartosc. Sprobuj ponownie.\nWybor: ";
		std::cin.clear();
		std::cin.ignore(123, static_cast<int>('\n'));
		std::cin >> accuracy;
	}
	return accuracy;
}

void ConsoleManager::show_error(const std::string & error_info) const
{
	using namespace std::chrono_literals;
	std::cout << "Wystapil blad!\nSzczegolowe informacje: " << error_info << "\n\nProgram zostanie za chwile zamkniety\n";
	std::this_thread::sleep_for(5s);

}

void ConsoleManager::update_result(double result) const
{
	using namespace std::chrono_literals;
	std::cout << "Wynik obliczen: " << result << "\n";
	std::this_thread::sleep_for(3s);
}