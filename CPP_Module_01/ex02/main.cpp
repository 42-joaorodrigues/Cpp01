#include "iostream"

int	main() {
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	// Addresses
	std::cout << std::endl;
	std::cout << "Address of string variable: " << &brain << std::endl;
	std::cout << "Address of string pointer: " << stringPTR << std::endl;
	std::cout << "Address of string reference: " << &stringREF << std::endl;

	// Values
	std::cout << std::endl;
	std::cout << "Value of string variable: " << brain << std::endl;
	std::cout << "Value of string pointer: " << *stringPTR << std::endl;
	std::cout << "Value of string reference: " << stringREF << std::endl;
	std::cout << std::endl;

	return 0;
}