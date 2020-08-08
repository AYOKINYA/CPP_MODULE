#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon("Power Fist", 8, 50)
{
	*this = copy;
}

PowerFist& PowerFist::operator=(const PowerFist &powerfist)
{
	if (this == &powerfist)
		return (*this);
	AWeapon::operator=(powerfist);
	return (*this);
}

PowerFist::~PowerFist()
{}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}