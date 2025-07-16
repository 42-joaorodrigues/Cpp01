#include "Zombie.hpp"
#include <iostream>

namespace Colour {
	static const char*	green = "\033[38;5;121m";
	static const char*	reset = "\033[0m";
}

// Constructor
Zombie::Zombie() {
	std::cout << "A Zombie was created" << std::endl;
}

// Destructor
Zombie::~Zombie() {
	std::cout << "Zombie '"
			  << Colour::green << (this->name.empty() ? "Unnamed" : this->name) << Colour::reset
			  << "' was deleted" << std::endl;
}

// Set
void Zombie::setName(const std::string& name) {
	this->name = name;
}

// Helper
void	Zombie::announce() {
	std::cout << Colour::green << (this->name.empty() ? "Unnamed" : this->name) << Colour::reset
			  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
