#include "Peon.hpp"

Peon::Peon(): Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream& operator<< (std::ostream& out, const Peon &peon)
{
    out << "I'm " << peon.get_name()  << " and I like otters!" << std::endl;
    return (out);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::string	Peon::get_name(void) const
{
    return (this->name);
}