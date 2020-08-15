/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:58:01 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 17:58:34 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <random>

Span::Span()
{
    this->vec.reserve(0);
    this->vec_len= 0;
    this->max_vec_len= 0;
}

Span::Span(unsigned int N)
{
    this->vec.reserve(N);
    this->vec_len= 0;
    this->max_vec_len = N;
}

Span::~Span()
{}

Span::Span(Span const & copy)
{
    *this = copy;
}

Span& Span::operator=(Span const & span)
{
    if (this == &span)
        return (*this);

    this->vec.clear();
    this->vec_len = span.vec_len;
    this->max_vec_len = span.vec_len;
    this->vec.reserve(this->max_vec_len);
    for (int i = 0 ; i < span.max_vec_len; ++i)
        this->vec.push_back(span.vec.at(i));

    return (*this);
}

void    Span::addNumber(int num)
{
    if (this->vec_len >= this->max_vec_len)
        throw std::out_of_range("The Storage Is Full!");
    this->vec.push_back(num);
    ++this->vec_len;
}

int     Span::shortestSpan(void)
{
    if (this->vec_len == 0 || this->vec_len == 1)
        throw std::out_of_range("Span cannot be finded.");
    
    std::vector<int> tmp;
    tmp = this->vec;
    std::sort(tmp.begin(), tmp.end());
    int span = tmp.at(1) - tmp.at(0);
    std::vector<int>::iterator itr = tmp.begin();
    for (; itr + 1!= tmp.end(); ++itr)
    {
        if (*(itr + 1) - *itr < span)
            span = *(itr + 1) - *itr;
    }
    return (span);
}

int     Span::longestSpan(void) const
{
    if (this->vec_len == 0 || this->vec_len == 1)
        throw std::out_of_range("Span cannot be finded.");

    int max = *std::max_element(this->vec.begin(), this->vec.end());
    int min = *std::min_element(this->vec.begin(), this->vec.end());

    return (max - min);
}

void    Span::addRandomNumbers(unsigned int range)
{
    if (this->vec_len != 0)
        throw std::out_of_range("It's not an empty object");
    if (range > (unsigned int)this->max_vec_len)
        throw std::out_of_range("It is out of range! Adding random numbers failed");
    
    std::random_device rd;
	std::mt19937  mt(rd());
	std::uniform_int_distribution<int> dis(0, 123456);

    for (unsigned int i = 0; i < range; ++i)
    {
        this->vec.push_back(dis(mt));
        ++this->vec_len;
    }
}