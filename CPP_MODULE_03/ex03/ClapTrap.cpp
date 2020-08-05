#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "A ClapTrap is constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = 0;
	this->Ranged_attack_damage = 0;
	this->Armor_damage_reduction = 0;

	std::cout << "A ClapTrap is constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "A copy constructor of ClapTrap is called." << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &ClapTrap)
{
	if (this == &ClapTrap)
		return (*this);

	this->Hit_points = ClapTrap.Hit_points;
	this->Max_hit_points = ClapTrap.Max_hit_points;
	this->Energy_points = ClapTrap.Energy_points;
	this->Max_energy_points = ClapTrap.Max_energy_points;
	this->Level = ClapTrap.Level;
	this->Name = ClapTrap.Name;
	this->Melee_attack_damage = ClapTrap.Melee_attack_damage;
	this->Ranged_attack_damage = ClapTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = ClapTrap.Armor_damage_reduction;

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap is destroyed." << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target)
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

void	ClapTrap::meleeAttack(std::string const &target)
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

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP ";
	std::cout << this->Name;
	std::cout << "is repaired with Energy_points ";
	std::cout << amount << std::endl;

	if (this->Energy_points + amount > this->Max_energy_points)
		this->Energy_points = this->Max_energy_points;
	else
		this->Energy_points += amount;
}

void	ClapTrap::show_status_quo(void) const
{
	std::cout << "Name : " << this->Name << std::endl;
	std::cout << "Level : " << this->Level << std::endl;
	std::cout << "Hit_points : " << this->Hit_points << std::endl;
	std::cout << "Energy_points : " << this->Energy_points << std::endl;
}

std::string	ClapTrap::get_Name(void) const
{
	return (this->Name);
}