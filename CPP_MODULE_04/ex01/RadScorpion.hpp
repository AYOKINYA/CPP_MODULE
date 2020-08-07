#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion();
			RadScorpion(const RadScorpion &copy);
			RadScorpion &operator=(const RadScorpion &rasScorpion);
			virtual ~RadScorpion();
};

#endif