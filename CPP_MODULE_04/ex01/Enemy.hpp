/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:00:18 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:00:18 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
	private:
			int			hp;
			std::string type;
	public:
			Enemy();
			Enemy(int hp, std::string const & type);
			Enemy(const Enemy &copy);
			Enemy &operator=(const Enemy &enemy);
			virtual ~Enemy();
			std::string const	getType() const;
			int					getHP() const;
			virtual void		takeDamage(int);
};

#endif