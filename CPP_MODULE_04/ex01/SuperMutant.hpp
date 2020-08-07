#ifndef SuperMutant_HPP
# define SuperMutant_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant();
			SuperMutant(const SuperMutant &copy);
			SuperMutant &operator=(const SuperMutant &supermutant);
			virtual ~SuperMutant();
			virtual void		takeDamage(int);
};

#endif