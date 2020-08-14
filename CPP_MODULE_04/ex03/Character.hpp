/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:05:00 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:05:01 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
	    std::string		name;
		AMateria*		inventory[4];
		unsigned int	i_count;
    public:
	    Character();
	    Character(std::string const &name);
	    ~Character();
	    Character(Character const &copy);
	    Character & operator=(Character const & characeter);
	    virtual std::string const & getName() const;
	    virtual void equip(AMateria* m);
	    virtual void unequip(int idx);
	    virtual void use(int idx, ICharacter& target);
};

#endif