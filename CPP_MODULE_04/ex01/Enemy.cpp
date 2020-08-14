/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:15 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:15 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}


Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{}

Enemy::Enemy(const Enemy &copy) : hp(copy.hp), type(copy.type)
{
	*this = copy;
}

Enemy& Enemy::operator= (const Enemy &Enemy)
{
	if (this == &Enemy)
		return (*this);
	this->hp = Enemy.hp;
	this->type = Enemy.type;
	return (*this);
}

Enemy::~Enemy()
{}

std::string const Enemy::getType() const
{
	return (this->type);
}

int		Enemy::getHP() const
{
	return (this->hp);
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->hp -= dmg;
}