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

	std::string alphanum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	int alphanumLength = alphanum.length();
	
	res = new char[20];

	srand((unsigned int)time(0));

	for (int i = 0; i < 8; i++)
		res[i] = alphanum[rand() % alphanumLength];
	
	*reinterpret_cast<int*>(res + 8) = rand();
	
	for (int i = 0; i < 8; i++)
		res[i + 12] = aalphanum[rand() % alphanumLength];
	
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
	char *s;
	Data *d;
	
	s = (char *)serialize();
	
	d = deserialize(s);
	std::cout << d->s1 << std::endl;
	std::cout << d->n << std::endl;
	std::cout << d->s2 << std::endl;

	return (0);
}