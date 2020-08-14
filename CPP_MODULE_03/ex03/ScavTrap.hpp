/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:08:11 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:08:12 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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