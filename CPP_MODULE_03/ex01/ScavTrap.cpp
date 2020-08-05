#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A ScavTrap is constructed." << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
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

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "A copy constructor of ScavTrap is called." << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &ScavTrap)
{
	if (this == &ScavTrap)
		return (*this);

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

void	ScavTrap::rangedAttack(std::string const &target)
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

void	ScavTrap::meleeAttack(std::string const &target)
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

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::show_status_quo(void) const
{
	std::cout << "Name : " << this->Name << std::endl;
	std::cout << "Level : " << this->Level << std::endl;
	std::cout << "Hit_points : " << this->Hit_points << std::endl;
	std::cout << "Energy_points : " << this->Energy_points << std::endl;
}
