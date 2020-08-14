/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkang <jkang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 19:40:41 by jkang             #+#    #+#             */
/*   Updated: 2020/08/14 19:40:42 by jkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>

struct Data { 
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void)
{
	char *res;

	std::string alphanum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dis(0, alphanum.length() - 1);

	res = new char[20];

	for (int i = 0; i < 8; i++)
		res[i] = alphanum[dis(mt)];
	
	*reinterpret_cast<int*>(res + 8) = rand();
	
	for (int i = 0; i < 8; i++)
		res[i + 12] = alphanum[dis(mt)];
	
	return (res);
}

Data *deserialize(void *res)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(res), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(res) + 8);
	d->s2 = std::string(static_cast<char*>(res) + 12, 8);
	return (d);
}

int main(void)
{
	void	*s;
	char	*ptr;
	Data	*d;

	s = serialize();
	ptr = reinterpret_cast<char*>(s);
	std::cout << "======serialization======" << std::endl;
	for (int i = 0; i < 8; ++i)
		std::cout << ptr[i];
	std::cout << *reinterpret_cast<int*>(ptr + 8);
	for (int i = 12; i < 20; ++i)
		std::cout << ptr[i];
	std::cout << std::endl;

	std::cout << "===deserialization===" << std::endl;
	d = deserialize(s);
	std::cout << d->s1 << std::endl;
	std::cout << d->n << std::endl;
	std::cout << d->s2 << std::endl;

	delete (d);
	delete ((char *)s); // 왜 이건 지워도 leak이 아닐까?

	return (0);
}