# include	"Zombie.hpp"

int		main( void )
{
	Zombie	*heap_zombie = newZombie("John Heaper");
	heap_zombie->announce();
	randomChump("Bob Stacker");
	delete heap_zombie;
	std::cout << "-- end of main --" << std::endl;
	return 0;
}
