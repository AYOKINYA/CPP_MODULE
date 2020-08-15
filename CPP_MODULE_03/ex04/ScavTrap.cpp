/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:50 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 10:51:51 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "A ScavTrap is constructed." << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;

	std::cout << "A ScavTrap is constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "A copy constructor of ScavTrap is called." << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &ScavTrap)
{
	if (this == &ScavTrap)
		return (*this);
	ClapTrap::operator=(ScavTrap);
	this->Hit_points = ScavTrap.Hit_points;
	this->Max_hit_points = ScavTrap.Max_hit_points;
	this->Energy_points = ScavTrap.Energy_points;
	this->Max_energy_points = ScavTrap.Max_energy_points;
	this->Level = ScavTrap.Level;
	this->Name = ScavTrap.Name;
	this->Melee_attack_damage = ScavTrap.Melee_attack_damage;
	this->Ranged_attack_damage = ScavTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = ScavTrap.Armor_damage_reduction;

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "A ScavTrap is destroyed." << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
    int			key = 0;
	std::string	challenges[5] = {
		"Hot Yoga",
		"Russian Roulette",
		"100 push-ups",
		"play La campanella",
		"bungee jumping"
	};

	key = rand() % 5;
    std::cout << this->Name;
    std::cout << " chose ";
	std::cout << challenges[key] << std::endl;
}
