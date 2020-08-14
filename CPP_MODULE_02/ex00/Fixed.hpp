/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:08:40 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:08:40 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
	public:
			Fixed() : value(0)
			{
				std::cout << "Default constructor called" << std::endl;
			};
			~Fixed()
			{
				std::cout << "Destructor called" << std::endl;
			};
			Fixed(const Fixed& copy) //: value(copy.value)
			{
				std::cout << "Copy constructor called" << std::endl;
				this->value = copy.getRawBits();
			};
			Fixed& operator= (const Fixed &fixed);
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
	private:
			int					value;
			static const int	n_bits = 8;
};

#endif