/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:09 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:09 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void) const
{
	if (this->weapon)
	{
		std::cout << this->name;
		std::cout << " attacks with his ";
		std::cout << this->weapon->getType() << std::endl;
	}
	else
		std::cout << "a weapon is not allocated." << std::endl;
}

void		HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}