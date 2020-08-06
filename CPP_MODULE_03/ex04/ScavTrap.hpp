#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
			ScavTrap();
			ScavTrap(std::string Name);
			ScavTrap(const ScavTrap& copy);
			ScavTrap& operator= (const ScavTrap &ScavTrap);
			~ScavTrap();
            void        challengeNewcomer(void);
};

#endif