/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:12:04 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:16:02 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> arr;

	Array<int> arr1(5);
	arr = arr1;

	std::cout << " ============ " << std::endl;
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	std::cout << " ============ " << std::endl;

	Array<int> arr_copy(arr);
	for (unsigned int i = 0; i < arr_copy.size(); ++i)
	{
		arr_copy[i] = i;
		std::cout << arr_copy[i]  << std::endl;
	}
	std::cout << " ============ " << std::endl;

	Array<float> arr2(10);
	for (unsigned int i = 0; i < arr2.size(); ++i)
	{
		arr2[i] = i;
		std::cout << arr2[i] << ".0f" << std::endl;
	}
	std::cout << " ============ " << std::endl;

	Array<double> arr3(7);
	for (unsigned int i = 0; i < arr3.size(); ++i)
	{
		arr3[i] = i;
		std::cout << arr3[i] << ".0" << std::endl;
	}
	std::cout << " ============ " << std::endl;

	Array<std::string> arr4(3);
	for (unsigned int i = 0; i < arr4.size(); ++i)
	{
		arr4[i] = 'a' + i;
		std::cout << arr4[i] << std::endl;
	}
	std::cout << " ============ " << std::endl;

	try
	{
		std::cout << arr[-1] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " ============ " << std::endl;

	try
	{
		std::cout << arr[100] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " ============ " << std::endl;

	return (0);
}