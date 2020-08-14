/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:59:31 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:59:32 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
			name(name), apcost(apcost), damage(damage) {};

AWeapon::AWeapon(const AWeapon& copy) : name(copy.name), apcost(copy.apcost), damage(copy.damage)
{
	*this = copy;	
}

AWeapon& AWeapon::operator= (const AWeapon &aweapon)
{
	if (this == &aweapon)
		return (*this);
	this->name = aweapon.name;
	this->apcost = aweapon.apcost;
	this->damage = aweapon.damage;
	return (*this);
}

AWeapon::~AWeapon()
{};

std::string const AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}