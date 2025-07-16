#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <number of zombies>" << std::endl;
		return 1;
	}

	int zombieCount = std::atoi(av[1]);
	if (zombieCount <= 0) {
		std::cerr << "Use a positive number of zombies" << std::endl;
		return 2;
	}

	std::cout << std::endl;
	Zombie*	horde = zombieHorde(zombieCount, "Warrior");
	if (!horde) {
		std::cerr << "Failed to create horde of Zombies ;(" << std::endl;
		return 3;
	}

	std::cout << std::endl;
	for (int i = 0; i < zombieCount; i++)
		horde[i].announce();

	std::cout << std::endl;
	delete[] horde;
	std::cout << std::endl;

	return 0;
}