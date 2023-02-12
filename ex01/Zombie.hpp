#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class Zombie
{
	public:
		// Constructors
		Zombie();
		Zombie(std::string name);

		// Destructor
		~Zombie();

		// Methods
		void announce() const;

		// Setters
		void setName(std::string name);

	private:
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
