/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:37:56 by jkang             #+#    #+#             */
/*   Updated: 2020/08/16 15:39:09 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    public:
            MutantStack();
            ~MutantStack();
            MutantStack(const MutantStack<T> &copy);
            MutantStack<T> & operator=(const MutantStack<T> &mutantstack);
		
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin(void);
			iterator end(void);
};

#endif