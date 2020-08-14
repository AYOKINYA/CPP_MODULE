/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:32 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:32 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle();
			PlasmaRifle(const PlasmaRifle &copy);
			PlasmaRifle& operator=(const PlasmaRifle &plasmarifle);
			virtual ~PlasmaRifle();
			virtual void	attack() const;
};

#endif