/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:37:54 by jkang             #+#    #+#             */
/*   Updated: 2020/08/16 15:44:09 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}


template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &mutantstack)
{
	if (this == &mutantstack)
		return (*this);
	std::stack<T>::operator=(mutantstack);
	return (*this);
}

template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename  MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}