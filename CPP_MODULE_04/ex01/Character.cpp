/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:59:56 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:59:57 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name) :
		name(name), AP(40), current_weapon(nullptr)
{}

Character::Character(const Character& copy):
		name(copy.name), AP(40), current_weapon(nullptr)
{
	*this = copy;	
}

Character& Character::operator= (const Character &character)
{
	if (this == &character)
		return (*this);
	this->name = character.name;
	this->AP = character.AP;
	this->current_weapon = character.current_weapon;

	return (*this);
}

Character::~Character()
{}

std::ostream& operator<<(std::ostream& out, const Character &character)
{
	out << character.getName() << " has ";
	out << character.getAP() << " AP";
	if (character.getCurrentWeapon() == nullptr)
		out << " and is unarmed";
	else
		out << " and wields a " << character.getCurrentWeapon()->getName();
	out << std::endl;
	return (out);
}


std::string const Character::getName() const
{
	return (this->name);
}

int					Character::getAP() const
{
	return (this->AP);
}

void	Character::recoverAP()
{
	if (this->AP + 10 > 40)
		this->AP = 40;
	this->AP += 10;
}

AWeapon* Character::getCurrentWeapon(void) const
{
	return (this->current_weapon);
}

void	Character::equip(AWeapon* aweapon)
{
	this->current_weapon = aweapon;
}

void	Character::attack(Enemy* enemy)
{
	int weapon_dmg;

	if (this->AP == 0 || this->current_weapon == nullptr)
		return ;
	std::cout << this->getName() << " attacks ";
	std::cout << enemy->getType() << " with a ";
	std::cout << this->current_weapon->getName() << std::endl;

	this->AP -= this->current_weapon->getAPCost();
	this->current_weapon->attack();
	weapon_dmg = this->current_weapon->getDamage();
	enemy->takeDamage(weapon_dmg);
	if (enemy->getHP() <= 0)
		delete (enemy);
}

