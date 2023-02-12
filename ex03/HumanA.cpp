#include "HumanA.hpp"

// This is not assigning, is initializing. It's also the only way to 'initialize' a const variable
// Reference members (like weapon) must be initialized at the time of object creation (a.k.a. initialization list)
// https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
// https://stackoverflow.com/a/926795/13323671
// https://en.cppreference.com/w/cpp/language/reference_initialization
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	std::cout << CYAN << "Constructor called of HumanA " << _name << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << RED << "Destructor called of HumanA " << _name << RESET << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
