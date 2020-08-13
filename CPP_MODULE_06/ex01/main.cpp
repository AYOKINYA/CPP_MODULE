#include <string>
#include <iostream>
#include <ctime>

void  serialize(void)
{
	char	*res;
	char	arr1[9];
	char	arr2[9];
	int		i_random;

	srand((unsigned int)time(0));

	static const char alphanum[] =
	{
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
	};

    for (int i = 0; i < 8; ++i) {
        arr1[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    arr1[8] = 0;
	std::cout << arr1 << std::endl;
	i_random = rand();
	std::cout << i_random << std::endl;
	for (int i = 0; i < 8; ++i) {
        arr2[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    arr2[8] = 0;
	std::cout << arr2 << std::endl;

	res = new char[20];
	res = std::strcpy(res, arr1);
	res += 8;
	res = std::strcpy(res, (char *)i_random);
	res += 4;
	res = std::strcpy(res, arr2);
	std::cout << arr1 << std::endl;
}

int main(void)
{
	//int *ptr;

	//ptr = (int *)serialize();
	//std::cout << *ptr << std::endl;
	//std::cout << ptr << std::endl;

	serialize();
	
	return (0);
}

void *serialize(void)
{
	static std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t alphabetLength = alphabet.length();
	char *raw;

	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = alphabet[rand() % alphabetLength];
	*reinterpret_cast<int*>(raw + 8) = rand() % 424242;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = alphabet[rand() % alphabetLength];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}