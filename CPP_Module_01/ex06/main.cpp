#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <level>" << std::endl;
		return 1;
	}

	std::string	input = av[1];
	Harl		evaluator;

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			levelIndex = -1;

	for (int i = 0; i < 4; i++)
		if (input == levels[i]) {
			levelIndex = i;
			break ;
		}

	switch (levelIndex) {
	case 0:
		std::cout << std::endl;
		evaluator.complain("DEBUG");
		// fall through
	case 1:
		std::cout << std::endl;
		evaluator.complain("INFO");
		// fall through
	case 2:
		std::cout << std::endl;
		evaluator.complain("WARNING");
		// fall through
	case 3:
		std::cout << std::endl;
		evaluator.complain("ERROR");
		break ;
	default:
		std::cout << std::endl;
		evaluator.complain("RANDOM");
	}
	std::cout << std::endl;

	return 0;
}
