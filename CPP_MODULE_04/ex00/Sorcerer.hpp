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
			std::string	get_name(void);
			std::string	get_title(void);
			void		polymorph(Victim const &) const;
	private:
			Sorcerer() {};
			std::string name;
			std::string title;
};

#endif