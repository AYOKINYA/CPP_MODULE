#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>
# include <exception>
# include <cmath>

class Conversion
{
	private:
			std::string input;
			Conversion();
	public:
			Conversion(std::string input);
			~Conversion();
			Conversion(Conversion const &copy);
			Conversion& operator=(Conversion const &conversion);
			std::exception ImpossibleException() const;
			std::exception NonDisplayableException() const;
			operator char() const;
			operator int() const;
			operator float() const;
			operator double() const;
			
};

#endif