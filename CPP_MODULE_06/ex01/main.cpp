#include <string>
#include <iostream>
#include <ctime>

struct Data { 
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void)
{
	char *res;

	static std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static int alphabetLength = alphabet.length();
	
	srand((unsigned int)0);
	res = new char[20];

	for (int i = 0; i < 8; i++)
		res[i] = alphabet[rand() % alphabetLength];
	
	*reinterpret_cast<int*>(res + 8) = rand();
	
	for (int i = 0; i < 8; i++)
		res[i + 12] = alphabet[rand() % alphabetLength];
	
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

