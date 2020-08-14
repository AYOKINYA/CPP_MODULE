#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Some random victim called ";
	std::cout << this->name; 
	std::cout << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "Some random victim called ";
	std::cout << this->name; 
	std::cout << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim ";
	std::cout << this->name; 
	std::cout << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy) : name(copy.name)
{
	*this = copy;
	std::cout << "Some random victim called ";
	std::cout << this->name; 
	std::cout << " just appeared!" << std::endl;
}

Victim& Victim::operator= (const Victim &victim)
{
    std::cout << "Assignation operator called" << std::endl;
	if (this == &victim)
        return (*this);
    this->name = victim.name;

    return (*this);
}

std::ostream& operator<< (std::ostream& out, const Victim &victim)
{
    out << "I'm " << victim.get_name() << " and I like otters!" << std::endl;
    return (out);
}

void    Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::get_name(void) const
{
    return (this->name);
}