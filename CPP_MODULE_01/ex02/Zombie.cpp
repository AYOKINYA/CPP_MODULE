#include "Zombie.hpp"

Zombie::~Zombie()
{}

std::string	Zombie::get_type(void) const
{
	return (this->type);
}

std::string	Zombie::get_name(void) const
{
	return (this->name);
}

std::string	Zombie::get_speech(void) const
{
	return (this->speech);
}

void		Zombie::set_type(std::string t)
{
	this->type = t;
}

void		Zombie::set_name(std::string n)
{
	this->name = n;
}

void		Zombie::set_speech(std::string s)
{
	this->speech = s;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << this->speech << std::endl; 
}

