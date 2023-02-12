#include "Sed.hpp"

Sed::Sed(std::string infile, std::string to_find, std::string to_replace)
{
	this->_infile = infile;
	this->_outfile = infile + std::string(".replace");
	this->_to_find = to_find;
	this->_to_replace = to_replace;

	std::cout << CYAN << "Constructor called of Sed " << RESET << std::endl;
}

Sed::~Sed()
{
	std::cout << RED << "Destructor called of Sed " << RESET << std::endl;
}


int Sed::run(void) const
{
	std::ifstream ifs(this->_infile.c_str());
	if (!ifs.is_open())
	{
		std::cerr << "Could not open input file." << std::endl;
		return EXIT_FAILURE;
	}
	std::ofstream ofs(this->_outfile.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Could not open output file." << std::endl;
		return EXIT_FAILURE;
	}
	std::string line;
	size_t position = 0;
	while (std::getline(ifs, line))
	{
		position = 0;
		position = line.find(_to_find, position);
		while (position != std::string::npos)
		{
			line.erase(position, _to_find.length());
			line.insert(position, _to_replace);
			// position += _to_replace.length();
			position = line.find(_to_find, position + _to_replace.length());
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return EXIT_SUCCESS;
}

