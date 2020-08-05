#ifndef NinjaTrap_HPP
# define NinjaTrap_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class NinjaTrap : public ClapTrap
{
	public:
			NinjaTrap();
			NinjaTrap(std::string Name);
			NinjaTrap(const NinjaTrap& copy);
			NinjaTrap& operator= (const NinjaTrap &NinjaTrap);
			~NinjaTrap();
            void        ninjaShoebox(FragTrap &trap);
            void        ninjaShoebox(ScavTrap &trap);
            void        ninjaShoebox(ClapTrap &trap);
            void        ninjaShoebox(NinjaTrap &trap);
};

# endif