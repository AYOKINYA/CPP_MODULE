#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("A");
	FragTrap b = FragTrap("B");
	FragTrap tmp("C");
	FragTrap c(tmp);

	a.rangedAttack("B");
	b.takeDamage(20);
	b.show_status_quo();

	c.meleeAttack("B");
	b.takeDamage(30);
	b.show_status_quo();

	b.vaulthunter_dot_exe("A");
	b.show_status_quo();
	a.takeDamage(50);
	a.show_status_quo();
	a.beRepaired(10);
	a.show_status_quo();
	a.beRepaired(1000);
	a.show_status_quo();

	c.vaulthunter_dot_exe("B");
	c.show_status_quo();
	b.takeDamage(50);
	b.show_status_quo();

	b.vaulthunter_dot_exe("A");

	return (0);
}