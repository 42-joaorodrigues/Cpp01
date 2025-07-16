#include "Zombie.hpp"
#include <iostream>

// Constructor
Zombie::Zombie(std::string name) : name(name) {
	std::cout << "Zombie '" << name << "' was created" << std::endl;
}

// Destructor
Zombie::~Zombie() {
	std::cout << "Zombie '" << this->name << "' was deleted" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

