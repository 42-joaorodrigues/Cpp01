#include "Weapon.hpp"

// Constructor
Weapon::Weapon(const std::string& type) {
	this->_type = type;
}

// Set
void Weapon::setType(const std::string& type) {
	this->_type = type;
}

// Get
const std::string& Weapon::getType() const {
	return this->_type;
}
