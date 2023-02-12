#include "Sed.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <to_find> <to_replace>" << std::endl;
		return EXIT_FAILURE;
	}

	Sed sed(av[1], av[2], av[3]);
	int result = sed.run();

	return result;
}
