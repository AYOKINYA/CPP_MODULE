/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:09:42 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:09:43 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void PonyOnTheHeap(void)
{
	Pony *pony;

	pony = new Pony();
	pony->set_name("Pony_no_1");
	pony->set_fur_color("brown");
	pony->set_height(100);
	std::cout << "It's " << pony->get_name() << " with " << pony->get_fur_color() << " color." << std::endl;
	std::cout << "Its height is " << pony->get_height() << "." << std::endl;
	pony->jump();
	pony->walk();
	pony->jump();
	delete(pony);
}

void PonyOnTheStack(void)
{
	Pony pony("Pony_no_2", "Pink", 200);
	std::cout << "It's " << pony.get_name() << " with " << pony.get_fur_color() << " color." << std::endl;
	std::cout << "Its height is " << pony.get_height() << "." << std::endl;
	pony.jump();
	pony.walk();
	pony.jump();
}

int main(void)
{
	std::cout << "================================" << std::endl;
	std::cout << "Here comes PonyOnTheHeap!" << std::endl;
	PonyOnTheHeap();
	std::cout << "PonyOnTheHeap gone with the wind" << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "Here comes PonyOnTheStack!" << std::endl;
	PonyOnTheStack();
	std::cout << "PonyOnTheStack gone with the wind" << std::endl;
	std::cout << "================================" << std::endl;
	return (0);
}