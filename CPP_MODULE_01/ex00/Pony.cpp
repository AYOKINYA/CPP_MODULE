#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "a Pony object is created." << std::endl; 
}

Pony::~Pony()
{
	std::cout << "a Pony object is destroyed." << std::endl; 
}

std::string Pony::get_name(void)
{
	return (this->name);
}

std::string Pony::get_fur_color(void)
{
	return (this->fur_color);
}

unsigned int Pony::get_height(void)
{
	return (this->height);
}

void 		Pony::set_name(std::string new_name)
{
	this->name = new_name;
}

void 		Pony::set_fur_color(std::string new_fur_color)
{
	this->fur_color = new_fur_color;
}

void 		Pony::set_height(unsigned int new_height)
{
	this->height = new_height;
}

void		Pony::walk(void)
{
	std::cout << this->name << " is walking." << std::endl;
}

void		Pony::jump(void)
{
	std::cout << this->name << " is jumping." << std::endl;
}
