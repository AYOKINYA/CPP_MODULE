#include <string>
#include <iostream>

class FragTrap
{
	public:
			FragTrap();
			FragTrap(const FragTrap& copy);
			FragTrap& operator= (const FragTrap &fragtrap);
			~FragTrap();
			void rangedAttack(std::string const & target);
			void meleeAttack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

	private:
			int Hit_points;
			int Max_hit_points;
			int Energy_points;
			int Max_energy_points;
			int Level;
			std::string name;
			int Melee_attack_damage;
			int Ranged_attack_damage;
			int Armor_damage_reduction;
};

void	FragTrap::rangedAttack(std:;string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->Ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std:;string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->Ranged_attack_damage;
	std::cout << " points of damage!" << std::endl;
}