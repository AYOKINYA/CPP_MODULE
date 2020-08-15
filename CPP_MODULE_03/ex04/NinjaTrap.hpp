/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:47 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 10:51:48 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class NinjaTrap : virtual public ClapTrap
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