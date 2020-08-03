#include "HumanA.hpp"

void 		HumanA::attack(void) const
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}