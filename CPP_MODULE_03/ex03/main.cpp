#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap a("A");
	FragTrap b = FragTrap("B");
	FragTrap tmp("C");
	FragTrap c(tmp);

	a.FragTrap::rangedAttack("B");
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

    ScavTrap j("J");
	ScavTrap k = ScavTrap("K");
	ScavTrap tmp2("L");
	ScavTrap l(tmp2);

	j.rangedAttack("K");
	k.takeDamage(15);
	k.show_status_quo();

	l.meleeAttack("K");
	k.takeDamage(20);
	k.show_status_quo();

	k.challengeNewcomer();
	j.takeDamage(5000);
	j.show_status_quo();
	j.beRepaired(10);
	j.show_status_quo();
	j.beRepaired(1000);
	j.show_status_quo();

	l.challengeNewcomer();
	k.takeDamage(500);
	k.show_status_quo();
    
    return (0);
}