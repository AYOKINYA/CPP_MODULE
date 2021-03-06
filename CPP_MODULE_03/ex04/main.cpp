/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:51:41 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 10:51:42 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	std::cout << "=====================" << std::endl;

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
    std::cout << "=====================" << std::endl;
	
	NinjaTrap	q("Q");
	NinjaTrap	p("P");
	
	q.rangedAttack("P");
	p.takeDamage(20);
	p.show_status_quo();

	q.takeDamage(500);
	q.show_status_quo();
	q.beRepaired(10);
	q.show_status_quo();
	q.beRepaired(1000);
	q.show_status_quo();

	ClapTrap x("X");

	q.ninjaShoebox(a);
	q.ninjaShoebox(j);
	q.ninjaShoebox(x);
	q.ninjaShoebox(p);

	std::cout << "=====================" << std::endl;
	
	SuperTrap s("S");
	s.show_status_quo();
	s.takeDamage(50);
	s.takeDamage(300);
	s.beRepaired(1000);

	s.vaulthunter_dot_exe("XXX");
	s.ninjaShoebox(a);
	s.ninjaShoebox(j);
	s.ninjaShoebox(x);
	s.ninjaShoebox(p);
	std::cout << "=====================" << std::endl;

    return (0);
}