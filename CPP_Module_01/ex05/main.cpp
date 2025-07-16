#include <iostream>
#include "Harl.hpp"

int	main() {
	Harl	evaluator;

	std::cout << std::endl;
	evaluator.complain("DEBUG");

	std::cout << std::endl;
	evaluator.complain("INFO");

	std::cout << std::endl;
	evaluator.complain("WARNING");

	std::cout << std::endl;
	evaluator.complain("ERROR");

	std::cout << std::endl;
	evaluator.complain("RANDOM");
	std::cout << std::endl;

	return 0;
}
