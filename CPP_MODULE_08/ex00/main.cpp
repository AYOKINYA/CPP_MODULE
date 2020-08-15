/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:56:13 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 11:56:13 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    std::cout << easyfind(vec, 1) << std::endl;
    std::cout << easyfind(vec, 2) << std::endl;
    std::cout << easyfind(vec, 3) << std::endl;
    std::cout << easyfind(vec, 4) << std::endl;
    try
    {
        std::cout << easyfind(vec, -2) << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // std::vector<float> vec2;
    // vec2.push_back(0.0);
    // vec2.push_back(10.5);
    // vec2.push_back(-4);
    // vec2.push_back(-3.2);
    // std::cout << easyfind(vec2, 4) << std::endl;


    return (0);
}