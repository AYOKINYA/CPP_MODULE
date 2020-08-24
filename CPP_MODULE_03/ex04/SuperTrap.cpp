/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:56 by jkang             #+#    #+#             */
/*   Updated: 2020/08/24 14:47:01 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): FragTrap(), NinjaTrap()
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = "anonymous";
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	
	std::cout << "A SuperTrap is constructed." << std::endl;
}

SuperTrap::SuperTrap(std::string Name): FragTrap(Name), NinjaTrap(Name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;

	std::cout << "A SuperTrap is constructed." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& copy) : FragTrap(copy), NinjaTrap(copy)
{
	std::cout << "A copy constructor of SuperTrap is called." << std::endl;
	*this = copy;
}

SuperTrap& SuperTrap::operator= (const SuperTrap &SuperTrap)
{
	if (this == &SuperTrap)
		return (*this);
	FragTrap::operator=(SuperTrap);
	NinjaTrap::operator=(SuperTrap);
	this->Hit_points = SuperTrap.Hit_points;
	this->Max_hit_points = SuperTrap.Max_hit_points;
	this->Energy_points = SuperTrap.Energy_points;
	this->Max_energy_points = SuperTrap.Max_energy_points;
	this->Level = SuperTrap.Level;
	this->Name = SuperTrap.Name;
	this->Melee_attack_damage = SuperTrap.Melee_attack_damage;
	this->Ranged_attack_damage = SuperTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = SuperTrap.Armor_damage_reduction;

	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "A SuperTrap is destroyed." << std::endl;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}