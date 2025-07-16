#include <iostream>
#include "Zombie.hpp"

namespace Colour {
	static const char*	pink = "\033[38;5;211m";
	static const char*	yellow = "\033[38;5;228m";
	static const char*	reset = "\033[0m";
}

int main() {
	std::cout << std::endl;

	std::cout << Colour::pink << "Testing Heap Zombie" << Colour::reset
			  << std::endl << std::endl;

	Zombie* heapZombie = newZombie("Heappy");
	heapZombie->announce();
	delete heapZombie;
	std::cout << std::endl;

	std::cout << std::endl << Colour::yellow << "Testing Heap Zombie" << Colour::reset
			  << std::endl << std::endl;

	randomChump("Chumpy");
	std::cout << std::endl;

	return 0;
}
