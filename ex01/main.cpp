# include	"Zombie.hpp"

int		main( void )
{
	Zombie	*horde = zombieHorde(5, "HordeZombie");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;

	std::cout << "End of main" << std::endl;
	return 0;
}
