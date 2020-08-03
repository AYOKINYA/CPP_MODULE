#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string name;
	int			r;

	if (N < 1)
	{
		std::cout << "malloc failed!" << std::endl;
		exit(12);
	}
	this->count = N;
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		name = "";
		for (int j = 0; j < 10; ++j)
		{
			r = rand() % 26;
			name += 'a' + r;
		}
		zombies[i].set_name(name);
		zombies[i].set_type("CRAZY");
		zombies[i].set_speech("Braiiiiiiinnnssss...");
	}
}

ZombieHorde::~ZombieHorde()
{
	if (this->zombies)
	{
		delete[] (this->zombies);
		this->zombies = 0;
	}
}

void ZombieHorde::announce()
{
	for (unsigned int i = 0; i < this->count; ++i)
		this->zombies[i].announce();
}
