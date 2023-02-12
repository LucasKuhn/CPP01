#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "colors.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack(void) const;

private:
	std::string _name;
	Weapon *_weapon;
};
#endif
