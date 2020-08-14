/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:21 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:22 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	std::cout << "enemy b's HP is " << b->getHP() << std::endl;
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << "enemy b's HP is " << b->getHP() << std::endl;
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << "enemy b's HP is " << b->getHP() << std::endl;
	std::cout << *me;
	me->attack(b);
	std::cout << "enemy b's HP is " << b->getHP() << std::endl;
	std::cout << *me;
	
	delete me;
	std::cout << "==================" << std::endl;
	std::cout << "Additional Tests start!" << std::endl;
	std::cout << "==================" << std::endl;

	Character you("you");

	Enemy *s = new SuperMutant();

	you.equip(pr);
	std::cout << you;
	you.equip(pf);
	std::cout << you;
	you.equip(NULL);
	std::cout << you;

	you.attack(s);
	std::cout << "supermutant s's HP is " << s->getHP() << std::endl;
	you.equip(pr);
	you.attack(s);
	std::cout << "supermutant s's HP is " << s->getHP() << std::endl;
	you.equip(pf);
	you.attack(s);
	std::cout << "supermutant s's HP is " << s->getHP() << std::endl;

	Enemy* e = new Enemy(73, "devil");

	you.attack(e);
	std::cout << "supermutant s's HP is " << e->getHP() << std::endl;

	RadScorpion rs1;
	RadScorpion rs2(rs1);
	std::cout << rs1.getType() << " " << rs2.getType() << std::endl;
	rs2 = rs1;
	std::cout << rs1.getType() << " " << rs2.getType() << std::endl;
	
	SuperMutant sm1;
	SuperMutant sm2(sm1);
	std::cout << sm1.getType() << " " << sm2.getType() << std::endl;
	sm2 = sm1;
	std::cout << sm1.getType() << " " << sm2.getType() << std::endl;

	return 0;

}
