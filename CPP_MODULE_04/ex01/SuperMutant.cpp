#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(170, "Super Mutant")
{
	*this = copy;
}

SuperMutant& SuperMutant::operator= (const SuperMutant &supermutant)
{
	if (this == &supermutant)
		return (*this);
	Enemy::operator=(supermutant);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}