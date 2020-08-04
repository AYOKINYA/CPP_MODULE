#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	// if (this == &fixed)
	// 	return (*this);
	this->value = fixed.value;

	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->n_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->n_bits);
}