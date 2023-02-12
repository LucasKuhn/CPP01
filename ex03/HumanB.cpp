#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	this->_name = name;
	std::cout << CYAN << "Constructor called of HumanB " << _name << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << RED << "Destructor called of HumanB " << _name << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " tries to attack but has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
