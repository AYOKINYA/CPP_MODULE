#include <iostream>
#include <string>
#include <ctype.h>

int		main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		for (std::size_t j = 0; j < std::strlen(argv[i]); ++j)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		std::cout << std::endl;
	return (0);
}