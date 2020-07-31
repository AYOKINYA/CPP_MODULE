#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
    private:
		std::string 	name;
		std::string		fur_color;
		unsigned int	height;
	public:
		Pony();
		Pony(std::string name, std::string fur_color, unsigned int height) : name(name), fur_color(fur_color), height(height)
		{
			std::cout << "a Pony is created." << std::endl; 
		};
		std::string		get_name(void);
		std::string		get_fur_color(void);
		unsigned int	get_height(void);
		void			set_name(std::string new_name);
		void			set_fur_color(std::string new_fur_color);
		void			set_height(unsigned int new_height);
		void			walk(void);
		void			jump(void);
		~Pony();
};

#endif