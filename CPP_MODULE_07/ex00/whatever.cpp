/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:11:54 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 20:11:55 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template<typename T>
void    swap(T& x, T& y)
{
    T tmp = x;
    x = y;
    y =  tmp;
}

template<typename T>
T    min(T& x, T& y)
{
    if (x >= y)
        return (y);
    else
        return (x);
}

template<typename T>
T    max(T& x, T& y)
{
    if (x <= y)
        return (y);
    else
        return (x);
}

// int main(void)
// {
//     int a = 1, b = 2;
//     std::cout << a << b << std::endl;
//     swap(a, b);
//     std::cout << a << b << std::endl;
//     std::cout << "min : " << min(a, b) << std::endl;
//     std::cout << "max : " << max(a, b) << std::endl;


//     char c = 'c', d = 'd';
//     std::cout << c << d << std::endl;
//     swap(c, d);
//     std::cout << c << d << std::endl;
//     std::cout << "min : " << min(c, d) << std::endl;
//     std::cout << "max : " << max(c, d) << std::endl;

//     float e = 10.0f, f = -42.5f;
//     std::cout << e << " " << f << std::endl;
//     swap(e, f);
//     std::cout << e << " " << f << std::endl;
//     std::cout << "min : " << min(e, f) << std::endl;
//     std::cout << "max : " << max(e, f) << std::endl;
    
//     double g = 0.003, h = -0.5;
//     std::cout << g << " " << h << std::endl;
//     swap(g, h);
//     std::cout << g << " " << h << std::endl;
//     std::cout << "min : " << min(g, h) << std::endl;
//     std::cout << "max : " << max(g, h) << std::endl;
    


//     return (0);
// }

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}