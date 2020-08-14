/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:59:33 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:59:34 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	private:
			std::string name;
			int			apcost;
			int			damage;
	public:
			AWeapon();
			AWeapon(std::string const &name, int apcost, int damage);
			AWeapon(const AWeapon &copy);
			AWeapon& operator=(const AWeapon &aweapon);
			virtual ~AWeapon();
			std::string const	getName() const;
			int					getAPCost() const;
			int					getDamage() const;
			virtual void		attack() const = 0;
};

#endif