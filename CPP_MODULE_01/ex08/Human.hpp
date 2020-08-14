/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:33 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:33 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include <string>

class Human
{
    private:
            void meleeAttack(std::string const & target);
            void rangedAttack(std::string const & target);
            void intimidatingShout(std::string const & target);
    public:
            void action(std::string const & action_name, std::string const & target);
};

#endif