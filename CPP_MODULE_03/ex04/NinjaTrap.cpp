#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	std::cout << "A NinjaTrap is constructed." << std::endl;
}

NinjaTrap::NinjaTrap(std::string Name): ClapTrap(Name)
{
	this->Hit_points = 60;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = Name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;

	std::cout << "A NinjaTrap is constructed." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy)
{
	std::cout << "A copy constructor of NinjaTrap is called." << std::endl;
	*this = copy;
}

NinjaTrap& NinjaTrap::operator= (const NinjaTrap &NinjaTrap)
{
	if (this == &NinjaTrap)
		return (*this);

	this->Hit_points = NinjaTrap.Hit_points;
	this->Max_hit_points = NinjaTrap.Max_hit_points;
	this->Energy_points = NinjaTrap.Energy_points;
	this->Max_energy_points = NinjaTrap.Max_energy_points;
	this->Level = NinjaTrap.Level;
	this->Name = NinjaTrap.Name;
	this->Melee_attack_damage = NinjaTrap.Melee_attack_damage;
	this->Ranged_attack_damage = NinjaTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = NinjaTrap.Armor_damage_reduction;

	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "A NinjaTrap is destroyed." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "FragTrap " << trap.get_Name();
    std::cout << " is rocking on MTV" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "ScavTrap " << trap.get_Name();
    std::cout << " is fixing Get_Next_Line" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "ClapTrap " << trap.get_Name();
    std::cout << " is trying to turn light on with his eyes" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "NinjaTrap " << trap.get_Name();
    std::cout << " is dreaming of a White Christmas" << std::endl;
}