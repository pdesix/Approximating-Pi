#pragma once
#include "IApproximatingAlgorithm.h"
#include <random>

/**
	Klasa obliczaj¹ca przybli¿on¹ wartoœæ liczby pi poprzez wylosowanie pewnej iloœci punktów z kwadratu
	i sprawdzenie ile z tych punktów nale¿y do okrêgu wpisanego w ów kwadrat.
*/
class MonteCarloApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizone obliczenie liczby pi poprzez zastosowanie metody Monte-Carlo"; }
	virtual double approximate_pi(int accuracy_level) const; // iloœæ punktów = accuracy_level * 150
};