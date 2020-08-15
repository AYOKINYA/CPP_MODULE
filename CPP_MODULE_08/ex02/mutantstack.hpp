/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:37:56 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 18:37:56 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MUTANTSTACK_HPP
{
    private:
    public:
            MutantStack();
            ~MutantStack();
            MutantStack(const MutantStack &copy);
            MutantStack& operator=(const MutantStack &mutantstack);
            MutantStack();

};

#endif