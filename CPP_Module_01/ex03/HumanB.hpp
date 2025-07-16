#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	// Constructor
	HumanB(const std::string& name);

	// Set
	void	setWeapon(Weapon& weapon);

	// Action
	void	attack() const;
};

#endif //HUMANB_HPP
