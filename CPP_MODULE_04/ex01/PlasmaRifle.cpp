/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:29 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:30 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy) : AWeapon("Plasma Rifle", 5, 21)
{
	*this = copy;
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle& PlasmaRifle::operator= (const PlasmaRifle &plasmarifle)
{
	if (this == &plasmarifle)
		return (*this);
	AWeapon::operator=(plasmarifle); //can assign values to private member variables in AWeapon
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}