#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>
#include <string>
#include "colors.hpp"

class Harl
{
public:
	// Constructors
	Harl();
	// Destructor
	~Harl();
	// Methods
	void complain(std::string level);

private:
	// Methods
	void print_message(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string _message;
};

#endif
