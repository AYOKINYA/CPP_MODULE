/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:07:10 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:07:11 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class ScavTrap
{
    public:
			ScavTrap();
			ScavTrap(std::string Name);
			ScavTrap(const ScavTrap& copy);
			ScavTrap& operator= (const ScavTrap &ScavTrap);
			~ScavTrap();
			void	    rangedAttack(std::string const & target);
			void	    meleeAttack(std::string const & target);
			void	    takeDamage(unsigned int amount);
			void	    beRepaired(unsigned int amount);
            void        challengeNewcomer(void);
			void	    show_status_quo(void) const;

	private:
			int 		Hit_points;
			int 		Max_hit_points;
			int 		Energy_points;
			int 		Max_energy_points;
			int 		Level;
			std::string Name;
			int 		Melee_attack_damage;
			int 		Ranged_attack_damage;
			int 		Armor_damage_reduction;
};

#endif