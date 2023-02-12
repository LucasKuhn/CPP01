#ifndef Sed_HPP
# define Sed_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>
# include "colors.hpp"

class Sed
{
	public:
		// Constructors
		Sed(std::string infile, std::string to_find, std::string to_replace);
		// Destructor
		~Sed();
		// Methods
		int run(void) const;

	private:
		std::string _infile;
		std::string _outfile;
		std::string _to_find;
		std::string _to_replace;
};

#endif
