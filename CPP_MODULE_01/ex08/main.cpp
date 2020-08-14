/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:35 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:35 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
    Human human;

    try
	{
		human.action("meleeAttack", "A");
		human.action("rangedAttack", "B");
		human.action("intimidatingShout", "C");
		human.action("XXXXXXXXXXX", "D");
	}
	catch (char const *e)
	{
		std::cerr << "Human actions exception: " << e << std::endl;
	}
	return (0);
}