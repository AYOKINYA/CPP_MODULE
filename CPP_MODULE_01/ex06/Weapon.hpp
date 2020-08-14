/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:21 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:22 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
			std::string         type;
	public:
			Weapon()			{};
			Weapon(std::string type) : type(type) {};
			~Weapon()			{};
			const std::string&  getType(void) const;
			void                setType(std::string input);
};


#endif