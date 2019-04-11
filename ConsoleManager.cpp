#include "ConsoleManager.h"

ConsoleManager& ConsoleManager::get_console_manager()
{
	static ConsoleManager console_manager;
	return console_manager;
}

int ConsoleManager::show_menu() const
{
	int option{ 0 };
	std::cout << "0. Wyjscie z programu\n";
	std::cout << "1. Aproksymacja liczby pi za pomoca sumy odwrotnosci kwadratow\n";
	std::cout << "2. Aproksymacja liczby pi za pomoca identycznosci zwiazanej z silnia\n";
	std::cout << "3. Aproksymacja liczby pi za pomoca metody Monte-Carlo\n";
	std::cout << "4. Aproksymacja liczby pi za pomoca numerycznego obliczania calki z 4/(1+x^2) na przedziale [0,1]\n";
	std::cout << "5. Aproksymacja liczby pi za pomoca wzoru Wallisa\n";
	std::cout << "6. Aproksymacja liczby pi za pomoca wzoru Leibniza\n";
	std::cout << "7. Aproksymacja liczby pi za pomoca calki z sqrt(1-x^2)\n";
	std::cout << "Wybor: ";
	std::cin >> option;
	while(!std::cin.good() || option < 0)
	{
		std::cout << "Cos poszlo nie tak... Prawdopodobnie wprowadziles niepoprawna wartosc. Sprobuj ponownie.\n";
		std::cin >> option;
	}
	return option;
}

int ConsoleManager::get_accuracy() const
{ 
	int accuracy;
	std::cout << "Wprowadz liczbe calkowita - stopien dokladnosci obliczen: ";
	std::cin >> accuracy;
	if (!std::cin.good())
	{
		throw std::exception("Zly wybor - wprowadzono cos innego niz liczba calkowita");
	}
	if (accuracy < 0)
	{
		throw std::exception("Zly wybor - stopien dokladnosci obliczen ustalono na mniejszy od zera");
	}
	return accuracy;
}

void ConsoleManager::print_error(const std::string & error_info) const
{
	using namespace std::chrono_literals;
	std::cout << "Wystapil blad!\nSzczegolowe informacje: " << error_info << "\n\nProgram zostanie za chwile zamkniety\n";
	std::this_thread::sleep_for(5s);

}

void ConsoleManager::print_result(const double & result) const
{
	using namespace std::chrono_literals;
	std::cout << "Wynik obliczen: " << result << "\n";
	std::this_thread::sleep_for(3s);
}