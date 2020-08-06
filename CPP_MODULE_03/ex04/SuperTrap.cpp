#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): FragTrap(), NinjaTrap()
{
	std::cout << "A SuperTrap is constructed." << std::endl;
}

SuperTrap::SuperTrap(std::string Name): FragTrap(Name), NinjaTrap(Name)
{
	this->Hit_points = FragTrap::Hit_points;
	this->Max_hit_points = FragTrap::Max_hit_points;
	this->Energy_points = NinjaTrap::Energy_points;
	this->Max_energy_points = NinjaTrap::Max_energy_points;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = NinjaTrap::Melee_attack_damage;
	this->Ranged_attack_damage = FragTrap::Ranged_attack_damage;
	this->Armor_damage_reduction = FragTrap::Armor_damage_reduction;

	std::cout << "A SuperTrap is constructed." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& copy)
{
	std::cout << "A copy constructor of SuperTrap is called." << std::endl;
	*this = copy;
}

SuperTrap& SuperTrap::operator= (const SuperTrap &SuperTrap)
{
	if (this == &SuperTrap)
		return (*this);

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