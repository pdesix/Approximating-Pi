#pragma once
#include <vector>
#include <memory>
#include "IApproximatingAlgorithm.h"

/**
	Manager algorytmów aproksymuj¹cych, wywo³uje odpowiednie algorytmy szacuj¹ce wartoœæ liczby pi i zwraca wynik.
	Klasa jest ca³kowicie niezale¿na od wyjœcia.
*/
class ApproximationController
{
	using ApproxAlgoPtr = std::unique_ptr<IApproximatingAlgorithm>;

	std::vector<ApproxAlgoPtr> algorithms; // Wektor zawieraj¹cy wskaŸniki na odpowiednie algorytmy
	ApproximationController();
	ApproximationController(ApproximationController&&) = delete;
	ApproximationController(const ApproximationController&) = delete;

public:
	double approximate_pi(int accuracy_level, int algorithm = 1) const;
	int implemented_algorithms_count() const; // Funkcja zwracaj¹ca iloœæ aktualnie zaimplementowanych algorytmów, tj. rozmiar wektora algorithms
	std::vector<std::string> get_names(); // Funkcja zwracaj¹ca nazwy wszystkich algorytmów, wykorzystywana do poprawnego wyœwietlania menu
	static ApproximationController& get_approximation_controller(); // Implementacja wzorca projektowego singleton
};