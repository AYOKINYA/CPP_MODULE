#include <iostream>
#include <string>

class ZombieEvent
{
	private:
			std::string	m_type;
	public:
			void		setZombieType(std::string type);
			Zombie*		newZombie(std::string name);
};

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void	ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(this->type, this->name);
	return (zombie);
}