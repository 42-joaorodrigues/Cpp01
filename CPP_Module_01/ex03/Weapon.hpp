#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string	_type;
public:
	// Constructor
	Weapon(const std::string& type);

	// Set
	void	setType(const std::string& type);

	// Get
	const std::string&	getType() const;
};

#endif //WEAPON_HPP
