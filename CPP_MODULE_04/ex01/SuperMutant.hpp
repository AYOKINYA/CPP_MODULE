/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:57 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:57 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_HPP
# define SuperMutant_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant();
			SuperMutant(const SuperMutant &copy);
			SuperMutant &operator=(const SuperMutant &supermutant);
			virtual ~SuperMutant();
			virtual void		takeDamage(int);
};

#endif