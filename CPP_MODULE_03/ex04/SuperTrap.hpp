/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:59 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 10:51:59 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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