/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:20 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:20 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde horde = ZombieHorde(20);
	std::cout << "Announcements from zombies:" << std::endl;
	horde.announce();

    std::cout << "WHEN N is -1 : ";
	ZombieHorde horde2 = ZombieHorde(-1);
	std::cout << "Announcements from zombies:" << std::endl;
	horde2.announce();
	return (0);
}