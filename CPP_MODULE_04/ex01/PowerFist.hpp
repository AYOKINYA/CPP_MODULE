/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:43 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:44 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist();
			PowerFist(const PowerFist &copy);
			PowerFist &operator=(const PowerFist &powerfist);
			virtual ~PowerFist();
			void	attack() const;
};

#endif