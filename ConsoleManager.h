#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

class ConsoleManager
{
private:
	ConsoleManager() = default;
	ConsoleManager(const ConsoleManager&) = delete;
	ConsoleManager(ConsoleManager&&) = delete;

public:
	static ConsoleManager& get_console_manager();
	int show_menu() const;
	int get_accuracy() const;
	void print_error(const std::string & error_info) const;
	void print_result(const double & result) const;
};

