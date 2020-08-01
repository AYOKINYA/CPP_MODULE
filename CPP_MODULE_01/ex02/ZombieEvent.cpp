#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(this->m_type, name);
	return (zombie);
}

Zombie*		ZombieEvent::randomChump(void)
{
	int			r;
	std::string	name;
	Zombie*		zombie;

	name = "";
	for (int i = 0; i < 10; ++i)
	{
		r = rand() % 26;
		name += 'a' + r;
	}
	zombie = new Zombie(this->m_type, name);
	return (zombie);
}
