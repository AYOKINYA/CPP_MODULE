/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:30 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:31 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include <string>
# include "Zombie.hpp"

class		ZombieHorde
{
	private:
			unsigned int	count;
			Zombie			*zombies;
	public:
			ZombieHorde(int N);
			~ZombieHorde();
			void	announce();
};

#endif