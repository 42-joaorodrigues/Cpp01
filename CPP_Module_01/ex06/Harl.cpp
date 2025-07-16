#include "Harl.hpp"
#include <iostream>

namespace Colour {
	static const char*	pink = "\033[38;5;211m";
	static const char*	yellow = "\033[38;5;228m";
	static const char*	green = "\033[38;5;121m";
	static const char*	purple = "\033[38;5;141m";
	static const char*	bold = "\033[1m";
	static const char*	reset = "\033[0m";
}

void Harl::debug() {
	std::cout << Colour::purple << "[DEBUG]" << Colour::reset << std::endl
			  << "I'm a 42 evaluator, If I see something that I don't like, I'll fail you." << std::endl;
}

void Harl::info() {
	std::cout << Colour::green << "[INFO]" << Colour::reset << std::endl
			  << "The code is correct, everything works as asked. Guess who doesn't care. ME." << std::endl;
}

void Harl::warning() {
	std::cout << Colour::yellow << "[WARNING]" << Colour::reset << std::endl
			  << "Even thought it works, I did it differently. I'll have to fail you :)" << std::endl;
}

void Harl::error() {
	std::cout << Colour::pink << "[ERROR]" << Colour::reset << std::endl
			  << "I'm a Philanthropist. i'll fail you so i get more of your points later!" << std::endl;
}

void Harl::complain(std::string level) {
	typedef		void (Harl::*Ftn)();
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Ftn			ftns[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (level == levels[i]) {
			(this->*ftns[i])();
				return ;
		}

	std::cout << Colour::bold << "[ Complaining about your keyboard layout ]"
			  << Colour::reset << std::endl;
}

