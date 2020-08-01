#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
			std::string	m_type;
	public:
			ZombieEvent() : m_type("CRAZY") {};
			void		setZombieType(std::string type);
			Zombie*		newZombie(std::string name);
			Zombie*		randomChump(void);
			~ZombieEvent() {};
};

#endif