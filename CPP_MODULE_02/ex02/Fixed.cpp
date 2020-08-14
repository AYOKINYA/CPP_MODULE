/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:09:26 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:09:27 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->value = fixed.value;

	return (*this);
}
Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator- (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator* (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &fixed) const
{
	if (fixed.toFloat() == 0)
	{
		std::cerr << "Can't divide by 0." << std::endl;
		return (0);
	}
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

bool Fixed::operator> (const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator< (const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>= (const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<= (const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator== (const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!= (const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed &Fixed::operator++ ()
{
	++this->value;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed &Fixed::operator-- ()
{
	--this->value;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
