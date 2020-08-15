/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:36 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 10:51:37 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "A FragTrap is constructed." << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;

	std::cout << "A FragTrap is constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "A copy constructor of FragTrap is called." << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator= (const FragTrap &fragtrap)
{
	if (this == &fragtrap)
		return (*this);
	ClapTrap::operator=(fragtrap);
	this->Hit_points = fragtrap.Hit_points;
	this->Max_hit_points = fragtrap.Max_hit_points;
	this->Energy_points = fragtrap.Energy_points;
	this->Max_energy_points = fragtrap.Max_energy_points;
	this->Level = fragtrap.Level;
	this->Name = fragtrap.Name;
	this->Melee_attack_damage = fragtrap.Melee_attack_damage;
	this->Ranged_attack_damage = fragtrap.Ranged_attack_damage;
	this->Armor_damage_reduction = fragtrap.Armor_damage_reduction;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "A FragTrap is destroyed." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			key = 0;
	std::string	attacks[5] = {
		"toe touch",
		"back scratch",
		"finger windmill",
		"palm wind",
		"drunken kick"
	};

	if (this->Energy_points < 25)
	{
		std::cout << this->Name;
		std::cout << " doesn't have enough Energy_points for vaulthunter_dot_exe." << std::endl;
		return ;
	}
	srand(time(0));
	key = rand() % 5;
	std::cout << attacks[key];
	std::cout << " on the " << target << std::endl;
	this->Energy_points -= 25;
	if (this->Hit_points + 50 > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += 50;
}
