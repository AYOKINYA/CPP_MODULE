/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:07:57 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:07:58 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string Name);
			ClapTrap(const ClapTrap& copy);
			ClapTrap& operator= (const ClapTrap &ClapTrap);
			~ClapTrap();
			void	    rangedAttack(std::string const & target);
			void	    meleeAttack(std::string const & target);
			void	    takeDamage(unsigned int amount);
			void	    beRepaired(unsigned int amount);
			void	    show_status_quo(void) const;
			std::string		get_Name(void) const;

	protected:
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

# endif