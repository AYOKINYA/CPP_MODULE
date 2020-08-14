/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:46:47 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:46:47 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
			Peon(std::string name);
			Peon(const Peon &copy);
			Peon& operator= (const Peon &peon);
			~Peon();
			virtual void	getPolymorphed() const;
			std::string	get_name(void) const;
	private:
			Peon();
			//std::string name; I use public memeber variable name from Victim!
};

std::ostream& operator<< (std::ostream& out, const Peon &peon);

# endif