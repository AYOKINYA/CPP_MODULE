#include "Zombie.hpp"

std::string	Zombie::get_type(void) const
{
	return (this->type);
}

std::string	Zombie::get_name(void) const
{
	return (this->name);
}

std::string	Zombie::get_speech(void) const
{
	return (this->speech);
}

void		Zombie::set_type(std::string t)
{
	this->type = t;
}

void		Zombie::set_name(std::string n)
{
	this->name = n;
}

void		Zombie::set_speech(std::string s)
{
	this->speech = s;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << this->speech << std::endl; 
}

class		ZombieHorde
{
	private:
			unsigned int	count;
			Zombie			*zombies;
	public:
			ZombieHorde(int N);
			~ZombieHorde();
			void	announce();
};

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

int main(void)
{
	ZombieHorde horde = ZombieHorde(20);
	std::cout << "Announcements from zombies:" << std::endl;
	horde.announce();


	ZombieHorde horde2 = ZombieHorde(-1);
	std::cout << "Announcements from zombies:" << std::endl;
	horde2.announce();
	return (0);
}

