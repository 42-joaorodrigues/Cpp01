#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	// Constructor
	HumanA(const std::string& name, Weapon& weapon);

	// Action
	void	attack() const;
};

#endif //HUMANA_HPP
