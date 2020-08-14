/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:06 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:06 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
			std::string         name;
			Weapon              &weapon;
	public:
			HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};
			~HumanA()           {};
			void				attack(void) const;
};

#endif