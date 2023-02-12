#ifndef Weapon_HPP
# define Weapon_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	std::string getType(void) const;
	void setType(std::string type);
private:
	std::string _type;
};
#endif
