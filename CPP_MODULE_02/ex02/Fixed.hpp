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
				*this = copy; // This calls an assignation operator!!
			};
			Fixed& operator= (const Fixed &fixed);
			Fixed operator+(const Fixed &fixed) const;
			Fixed operator-(const Fixed &fixed) const;
			Fixed operator*(const Fixed &fixed) const;
			Fixed operator/(const Fixed &fixed) const;
			bool operator>(const Fixed &fixed) const;
			bool operator<(const Fixed &fixed) const;
			bool operator>=(const Fixed &fixed) const;
			bool operator<=(const Fixed &fixed) const;
			bool operator==(const Fixed &fixed) const;
			bool operator!=(const Fixed &fixed) const;
			Fixed &operator++ ();
			Fixed operator++ (int);
			Fixed &operator-- ();
			Fixed operator-- (int);
			~Fixed()
			{
				std::cout << "Destructor called" << std::endl;
			};
			int					getRawBits(void) const;
			void				setRawBits(int const raw);
			float				toFloat(void) const;
			int					toInt(void) const;
			static Fixed&		min(Fixed &a, Fixed &b);
			static const Fixed&	min(const Fixed &a, const Fixed &b);
			static Fixed&		max(Fixed &a,Fixed &b);
			static const Fixed& max(const Fixed &a, const Fixed &b);
	private:
			int					value;
			static const int	n_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);

#endif