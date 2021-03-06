/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:52:11 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:52:11 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::string name = "A";
    try
    {
        // Bureaucrat a(name, 149);
        // std::cout << a;
        // a.decrement_grade();
        // std::cout << a;
        // a.decrement_grade();
        // std::cout << a;

        Bureaucrat b(name, 2);
        std::cout << b;
        b.increment_grade();
        std::cout << b;
        b.increment_grade();

        // Bureaucrat c(name, 160);
        // Bureaucrat d(name, -3);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}