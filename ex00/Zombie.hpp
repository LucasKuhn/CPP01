#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class Zombie
{
	public:
		// Constructors
		Zombie(std::string name);

		// Destructor
		~Zombie();

		// Methods
		void announce() const;

	private:
		std::string _name;

};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
