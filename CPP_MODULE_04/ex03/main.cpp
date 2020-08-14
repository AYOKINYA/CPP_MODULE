/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:22 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:22 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp = nullptr;
	AMateria* first = nullptr;
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	first = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	me->equip(nullptr);

	ICharacter* bob = new Character("bob");
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(-1, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(1, *bob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(2, *bob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(3, *bob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->use(4, *bob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	me->unequip(0);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(3, *bob);
	me->unequip(-1);
	me->equip(first);

	delete bob;
	delete me;
	delete src;

	return (0);
}