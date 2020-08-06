#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
			SuperTrap();
			SuperTrap(std::string Name);
			SuperTrap(const SuperTrap& copy);
			SuperTrap& operator= (const SuperTrap &NinjaTrap);
			~SuperTrap();
            
            void    rangedAttack(std::string const & target);
            void    meleeAttack(std::string const & target);
};

# endif