/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:56:09 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 11:56:10 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <vector>
# include <string>
# include <iostream>

template <typename T>
int easyfind(std::vector<T> &first, const int &second)
{
   try
   {
        for (std::vector<int>::iterator iter = first.begin(); iter != first.end(); ++iter)
        {
                if (*iter == second)
                    return (*iter);
        }
   }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    throw std::out_of_range("The index is out of range!");
    return (-1);
}

#endif