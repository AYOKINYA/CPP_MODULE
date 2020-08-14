/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:59:37 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:59:38 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
			std::string	name;
			int 		AP;
			AWeapon*	current_weapon;
	public:
			Character();
			Character(std::string const &name);
			Character(Character const &copy);
			Character &operator=(Character const &character);
			~Character();

			void recoverAP(void);
			void equip(AWeapon *weapon);
			void attack(Enemy *enemy);

			std::string const getName(void) const;
			int getAP(void) const;
			AWeapon *getCurrentWeapon(void) const;
};

std::ostream& operator<<(std::ostream &out, const Character &character);

#endif