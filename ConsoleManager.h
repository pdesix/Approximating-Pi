#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>

/**
	Klasa zarz¹daj¹ca konsol¹.
*/
class ConsoleManager
{
private:
	ConsoleManager() = default;
	ConsoleManager(const ConsoleManager&) = delete;
	ConsoleManager(ConsoleManager&&) = delete;

public:
	static ConsoleManager& get_console_manager();
	int show_menu(std::vector<std::string> algorithm_names) const; // Funkcja pokazuj¹ca menu, zwraca wybran¹ przez u¿ytkownika opcjê.
	int get_accuracy() const; // Funkcja wyœwietlaj¹ca monit o ustalenie dok³adnoœci obliczeñ, zwraca liczbê naturaln¹ - stopieñ dok³adnoœci, np. iloœæ wyrazów szeregu do zsumowania.
	void print_error(const std::string & error_info) const; // Wyœwietla komunikat b³êdu.
	void print_result(const double & result) const; // Wyœwietla wynik obliczeñ.
};