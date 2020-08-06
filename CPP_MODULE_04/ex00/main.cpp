#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << "==================" << std::endl;
	std::cout << "Additional Tests start!" << std::endl;
	std::cout << "==================" << std::endl;
	//Sorcerer tmp;
	Peon x("X");
	Peon y("Y");
	std::cout << x << y;
	robert.polymorph(x);
	robert.polymorph(y);
	return 0;
}

