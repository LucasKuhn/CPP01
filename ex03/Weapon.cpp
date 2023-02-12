#include "Weapon.hpp"

// Constructors
Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << CYAN << "Constructor called of Weapon " << _type << RESET << std::endl;
}

// Destructor
Weapon::~Weapon()
{
	std::cout << RED << "Destructor called of Weapon " << _type << RESET << std::endl;
}
// Getters
std::string Weapon::getType() const
{
	return _type;
}

// Setters
void Weapon::setType(std::string type)
{
	_type = type;
}
