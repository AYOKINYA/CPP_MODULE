#include "Brain.hpp"

std::string	Brain::identify()
{
	std::string res;

	std::ostringstream address;
	address << (void const*)this;
	res = address.str();

	return (res);
}
