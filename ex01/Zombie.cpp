#include "Zombie.hpp"

// Constructors
Zombie::Zombie() : _name("Unnamed")
{
	std::cout << CYAN << "Constructor called of zombie " << _name << RESET << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << CYAN << "Constructor called of zombie " << _name << RESET << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << RED << "Destructor called of zombie " << _name << RESET << std::endl;
}

// Setters
void Zombie::setName(std::string name)
{
	_name = name;
}

// Announce
void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
