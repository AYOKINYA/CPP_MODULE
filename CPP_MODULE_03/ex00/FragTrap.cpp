/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:57:29 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:57:29 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "A FragTrap is constructed." << std::endl;
}

FragTrap::FragTrap(std::string Name)
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

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "A copy constructor of FragTrap is called." << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator= (const FragTrap &fragtrap)
{
	if (this == &fragtrap)
		return (*this);

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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->Name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->Ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;

	if (this->Hit_points + this->Ranged_attack_damage > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += this->Ranged_attack_damage;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->Name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->Melee_attack_damage;
	std::cout << " points of damage!" << std::endl;

	if (this->Hit_points + this->Melee_attack_damage > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += this->Melee_attack_damage;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	long long dmg;

	dmg = amount;
	std::cout << "FR4G-TP ";
	std::cout << this->Name;
	std::cout << " takes damage of ";
	std::cout << amount << std::endl;

	if (this->Energy_points - dmg + this->Armor_damage_reduction < 0)
		this->Energy_points = 0;
	else
		this->Energy_points = this->Energy_points - dmg + this->Armor_damage_reduction;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP ";
	std::cout << this->Name;
	std::cout << " is repaired with Energy_points ";
	std::cout << amount << std::endl;

	if (this->Energy_points + amount > this->Max_energy_points)
		this->Energy_points = this->Max_energy_points;
	else
		this->Energy_points += amount;
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

void	FragTrap::show_status_quo(void) const
{
	std::cout << "Name : " << this->Name << std::endl;
	std::cout << "Level : " << this->Level << std::endl;
	std::cout << "Hit_points : " << this->Hit_points << std::endl;
	std::cout << "Energy_points : " << this->Energy_points << std::endl;
}
