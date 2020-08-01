#include <iostream>
#include <sstream>
#include <string>

class Brain
{
    private:
            int				activity;
            unsigned int	oxygen_level;
    public:
			Brain() : activity(0), oxygen_level(0) {};
			~Brain() {};
			std::string	identify();
};

std::string	Brain::identify()
{
	std::string res;

	std::ostringstream address;
	address << (void const*)this;
	res = address.str();

	return (res);
}

/*
int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}
*/

int main(void)
{
	Brain brain;

	std::cout << brain.identify() << std::endl;
	return (0);
}