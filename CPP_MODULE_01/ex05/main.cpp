/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:10:49 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:10:50 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    Human homo_sapiens;

    std::cout << homo_sapiens.identify() << std::endl;
    std::cout << homo_sapiens.getBrain().identify() << std::endl;
}