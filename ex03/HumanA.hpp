#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "colors.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	// Const at the end tells the compiler that this member function won't alter the instance
	void attack(void) const;

private:
	std::string	_name;
	Weapon&		_weapon;

};
#endif
