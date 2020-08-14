/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:03 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:03 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void 		HumanA::attack(void) const
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}