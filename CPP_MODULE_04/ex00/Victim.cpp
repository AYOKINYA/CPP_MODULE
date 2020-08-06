#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Some random victim called ";
	std::cout << this->name; 
	std::cout << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim "
	std::cout << this->name; 
	std::cout << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator= (const Victim &victim)
{
    if (this == &victim)
        return (*this);
    this->name = victim.name;

    return (*this);
}

std::ostream& operator<< (std::ostream& out, const Victim &victim)
{
    out << "I'm " << this->name << " and I like otters!" << std::endl;
    return (out);
}

void    Victim::getPolymorphed() const
{
    std::cout << this->name >> " has been turned into a cute little sheep!" << std::endl;
}
