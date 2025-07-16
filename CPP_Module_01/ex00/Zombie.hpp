#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {
private:
	std::string name;
public:
	// Constructor
	Zombie(std::string name);
	// Destructor
	~Zombie();

	// Helper
	void	announce( void );
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif //ZOMBIE_HPP
