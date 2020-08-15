/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:56:09 by jkang             #+#    #+#             */
/*   Updated: 2020/08/15 17:09:34 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <string>
# include <iostream>
# include <exception>
# include <cmath>

class Span
{
	private:
			std::vector<int>    vec;
			int                 max_vec_len;
			int                 vec_len;

	public:
			Span();
			Span(unsigned int N);
			~Span();
			Span(Span const & copy);
			Span& operator=(Span const & span);
			int&  operator[](unsigned int index);
			void    addNumber(int num);
			int     shortestSpan(void);
			int     longestSpan(void) const;
			void	addRandomNumbers(unsigned int range);
};

#endif