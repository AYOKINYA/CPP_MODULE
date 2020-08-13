#include "Conversion.hpp"

void	printChar(Conversion &conversion)
{
	char c;

	std::cout << "char : ";
	try
	{
		c = static_cast<char>(conversion);
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	printInt(Conversion &conversion)
{
	int i;

	std::cout << "int: ";
	try
	{
		i = static_cast<int>(conversion);
		std::cout << i << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	printFloat(Conversion &conversion)
{
	float f = 0;
	std::cout << "float: ";
	try
	{
		f = static_cast<float>(conversion);
		std::cout << f;
		if (fabs(f - round(f)) < 0.0001)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	printDouble(Conversion &conversion)
{
	double d;

	std::cout << "double: ";
	try
	{
		d = static_cast<double>(conversion);
		std::cout << d;
		if (fabs(d - round(d)) < 0.0001)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "argc must be 2!" << std::endl;
		return (-1);
	}
	std::string input = argv[1];
	Conversion conv(input);
	printChar(conv);
	printInt(conv);
	printFloat(conv);
	printDouble(conv);
	
	return (0);
}