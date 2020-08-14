/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:50 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:50 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion();
			RadScorpion(const RadScorpion &copy);
			RadScorpion &operator=(const RadScorpion &rasScorpion);
			virtual ~RadScorpion();
};

#endif