#include <iostream>
#include "Replace.hpp"

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (s1.empty()) {
		std::cerr << "s1 can't be empty" << std::endl;
		return 2;
	}

	const Replace	replace(filename, s1, s2);
	if (!replace.process())
		return 3;

	return 0;
}
