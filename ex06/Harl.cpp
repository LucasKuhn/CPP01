#include "Harl.hpp"

Harl::Harl() : _message("[ Probably complaining about insignificant problems ]")
{
}

Harl::~Harl()
{
}

void Harl::print_message(void)
{
	std::cout << _message << std::endl;
}

void Harl::debug(void)
{
	_message = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	print_message();
}

void Harl::info(void)
{
	_message = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	print_message();
}

void Harl::warning(void)
{
	_message = "I think I deserve to have extra bacon for free. I've been coming here for years and you just started working here last month.";
	print_message();
}

void Harl::error(void)
{
	_message = "This is unacceptable, I want to speak to the manager now.";
	print_message();
}

void Harl::complain(std::string level)
{
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
	if (i == 4)
	{
		print_message();
		return;
	}
	std::cout << "[ " << level << " ]" << std::endl;
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
	}
}
