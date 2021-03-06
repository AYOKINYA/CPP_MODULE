/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:11 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:12 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
			std::string         name;
			Weapon              *weapon;
	public:
			HumanB()            {};
			HumanB(std::string name) : name(name) {};
			~HumanB()           {};
			void				attack(void) const;
			void				setWeapon(Weapon &new_weapon);
};

#endif