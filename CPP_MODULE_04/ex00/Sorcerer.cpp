#include "Sorcerer.hpp"

std::ostream& operator<<(std::ostream& out, const Sorcerer &sorcerer);

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << std::endl;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator= (const Sorcerer &sorcerer)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &sorcerer)
		return (*this);
	this->name = sorcerer.name;
	this->title = sorcerer.title;

	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Sorcerer& sorcerer)
{
	out << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!";
	return (out);
}

std::string	Sorcerer::get_name(void)
{
	return (this->name);
}

std::string	Sorcerer::get_title(void)
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const &victim) const;
{
	victim.getPolymorphed();
}