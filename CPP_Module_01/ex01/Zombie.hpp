#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {
private:
	std::string name;
public:
	// Constructor
	Zombie();
	// Destructor
	~Zombie();

	// Set
	void	setName(const std::string& name);

	// Helper
	void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP
