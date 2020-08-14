/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:17 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:17 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"


const 				std::string&  Weapon::getType(void) const
{
	return (this->type);
}

void                Weapon::setType(std::string input)
{
	this->type = input;
}
