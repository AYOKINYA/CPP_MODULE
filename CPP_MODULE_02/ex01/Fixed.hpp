#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
			Fixed() : value(0)
			{
				std::cout << "Default constructor called" << std::endl;
			};
			Fixed(const int input)
			{
				std::cout << "Int constructor called" << std::endl;
				this->value = (input << this->n_bits);
			};
			Fixed(const float input)
			{
				std::cout << "Float constructor called" << std::endl;
				this->value = roundf(input * (1 << this->n_bits));
			};
			Fixed(const Fixed& copy)
			{
				std::cout << "Copy constructor called" << std::endl;
				*this = copy; // This calls an assignation operatior!!
			};
			Fixed& operator= (const Fixed &fixed);
			~Fixed()
			{
				std::cout << "Destructor called" << std::endl;
			};
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
	private:
			int					value;
			static const int	n_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);

#endif