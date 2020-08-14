/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:16 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:16 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
			std::string	m_type;
	public:
			ZombieEvent() : m_type("CRAZY") {};
			void		setZombieType(std::string type);
			Zombie*		newZombie(std::string name);
			Zombie*		randomChump(void);
			~ZombieEvent() {};
};

#endif