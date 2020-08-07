#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy)
{
	*this = copy;
}

RadScorpion& RadScorpion::operator= (const RadScorpion &radscorpion)
{
	if (this == &radscorpion)
		return (*this);
	Enemy::operator=(radscorpion);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}