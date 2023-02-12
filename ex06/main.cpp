#include "Harl.hpp"

int main(int argc, char *argv[])
{
	std::string level;
	if (argc < 2)
		level = "insignificant";
	else
		level = argv[1];
	Harl harl;
	harl.complain(level);
	return 0;
}
