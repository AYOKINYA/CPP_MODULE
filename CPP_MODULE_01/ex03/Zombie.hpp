#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
			std::string type;
			std::string name;
			std::string speech;
	public:
			Zombie() {};
			~Zombie() {};
			std::string	get_type (void) const;
			std::string	get_name (void) const;
			std::string	get_speech (void) const;
			void		set_type(std::string t);
			void		set_name(std::string n);
			void		set_speech(std::string s);
			void		announce(void);
};

#endif