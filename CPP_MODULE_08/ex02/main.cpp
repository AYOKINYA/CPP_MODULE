/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:37:52 by jkang             #+#    #+#             */
/*   Updated: 2020/08/16 15:59:12 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

#include <vector>
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    std::cout << "mstack is empty: " << std::boolalpha << mstack.empty() << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "mstack is empty: " << mstack.empty() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;
    std::cout << "============" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "============" << std::endl;

    std::stack<int> s(mstack);
    s.push(123);
    mstack.swap(s);
    it = mstack.begin();
    ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "============" << std::endl;
    return 0;
}