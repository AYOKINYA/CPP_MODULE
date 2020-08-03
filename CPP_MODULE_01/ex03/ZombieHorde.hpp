#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include <string>
# include "Zombie.hpp"

class		ZombieHorde
{
	private:
			unsigned int	count;
			Zombie			*zombies;
	public:
			ZombieHorde(int N);
			~ZombieHorde();
			void	announce();
};

#endif