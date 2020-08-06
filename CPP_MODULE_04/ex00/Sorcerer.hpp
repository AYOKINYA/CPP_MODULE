#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
			Sorcerer(std::string name, std::string title);
			Sorcerer(const Sorcerer &copy);
			Sorcerer& operator= (const Sorcerer &sorcerer);
			~Sorcerer();
			std::string	get_name(void) const;
			std::string	get_title(void) const;
			void		polymorph(Victim const &) const;
	private:
			Sorcerer() {};
			std::string name;
			std::string title;
};

std::ostream& operator<< (std::ostream& out, const Sorcerer& sorcerer);

#endif