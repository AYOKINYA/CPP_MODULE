/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:12:01 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:26:27 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
			unsigned int	arr_len;
			T				*arr;
	public:
			Array();
			~Array();
			Array(unsigned int n);
			Array(Array const &copy);
			Array& operator=(Array const &array);
			std::exception IndexOutOfRange() const;
			T & operator[](const unsigned int &index) const;
			unsigned int	size(void) const;
};

template <typename T>
Array<T>::Array() : arr_len(0), arr(nullptr)
{
	this->arr = new T[0];
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr != nullptr)
		delete[] this->arr;
}

template <typename T>
Array<T>::Array(unsigned int n) : arr_len(n), arr(nullptr)
{
	this->arr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &copy) : arr_len(0), arr(nullptr)
{
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &array)
{
	if (this == &array)
		return (*this);

	if (this->arr != nullptr)
		delete[] this->arr;

	this->arr_len = array.arr_len;
	this->arr = new T[this->arr_len];

	for (unsigned int i = 0; i < this->arr_len; ++i)
		arr[i] = array.arr[i];

	return (*this);
}

template <typename T>
std::exception Array<T>::IndexOutOfRange() const
{
	throw std::out_of_range("The index is out of range!");
}

template <typename T>
T& Array<T>::operator[](const unsigned int &index) const
{
	if (index >= this->arr_len)
		Array<T>::IndexOutOfRange();

	return (arr[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->arr_len);
}

#endif