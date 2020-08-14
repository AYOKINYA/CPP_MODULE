/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:46 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:47 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(80, "RadScorpion")
{
	*this = copy;
}

RadScorpion& RadScorpion::operator= (const RadScorpion &radscorpion)
{
	if (this == &radscorpion)
		return (*this);
	Enemy::operator=(radscorpion);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}