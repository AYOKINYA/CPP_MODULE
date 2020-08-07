#include "Enemy.hpp"

Enemy::Enemy()
{}


Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{}

Enemy::Enemy(const Enemy &copy)
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