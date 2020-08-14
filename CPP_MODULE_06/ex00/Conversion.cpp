/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:40:27 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:40:28 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{}


Conversion::Conversion(std::string input) : input(input)
{}

Conversion::~Conversion()
{}

Conversion::Conversion(Conversion const &copy) : input("")
{
	*this = copy;
}

Conversion& Conversion::operator=(Conversion const &conversion)
{
	if (this == &conversion)
		return (*this);
	this->input = conversion.input;
	return (*this);
}

std::exception Conversion::ImpossibleException() const
{
	throw std::invalid_argument("impossible");
}

std::exception Conversion::NonDisplayableException() const
{
	throw std::invalid_argument("Non displayable");
}


Conversion::operator char() const
{
	int c;

	try
	{
		c = std::stoi(this->input);
	}
	catch(std::exception &e)
	{
		Conversion::ImpossibleException();
	}
	if (c < -128 || c > 127)
		Conversion::ImpossibleException();
	else if (c < 32 || c > 126)
		Conversion::NonDisplayableException();
	return (static_cast<char>(c));
}

Conversion::operator int() const
{
	int i = 0;
	try
	{
		i = std::stoi(this->input);
	}
	catch (const std::exception &e)
	{
		Conversion::ImpossibleException();
	}
	return (i);
}

Conversion::operator float() const
{
	float f;

	f = 0;
	try
	{
		f = std::stof(this->input);
	}
	catch(const std::exception& e)
	{
		Conversion::ImpossibleException();
	}
	return (f);
}

Conversion::operator double() const
{
	double d;

	d = 0;
	try
	{
		d = std::stod(this->input);
	}
	catch(const std::exception& e)
	{
		Conversion::ImpossibleException();
	}
	return (d);
}
