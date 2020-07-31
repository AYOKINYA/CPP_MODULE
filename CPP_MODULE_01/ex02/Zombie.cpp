#include <iostream>
#include <string>

class Zombie
{
	private:
			std::string type;
			std::string name;
			std::string speech;
	public:
			Zombie() : type("CRAZY"), name("zmb"), speech("Braiiiiiiinnnssss...") {};
			Zombie(const std::string &type = "CRAZY", const std::string &name="zmb", const std::string &speech="Braiiiiiiinnnssss...")
			: type(type), name(name), speech(speech) {};
			~Zombie();
			std::string	get_type(void);
			std::string	get_name(void);
			std::string	get_speech(void);
			void		set_type(std::string t);
			void		set_name(std::string n);
			void		set_speech(std::string s);
			void		announce(void);
};

Zombie::~Zombie()
{}

std::string	Zombie::get_type(void)
{
	return (this->type);
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

std::string	Zombie::get_speech(void)
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

class ZombieEvent
{
	private:
			std::string	m_type;
	public:
			ZombieEvent() : m_type("CRAZY") {};
			void		setZombieType(std::string type);
			Zombie*		newZombie(std::string name);
			Zombie*		randomChump(void);
			~ZombieEvent() {};
};

void		ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(this->m_type, name);
	return (zombie);
}

Zombie*		ZombieEvent::randomChump(void)
{
	int			r;
	std::string	name;
	Zombie*		zombie;

	name = "";
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r = rand() % 26;
		name += r;
	}
	zombie = new Zombie(this->m_type, name);
	return (zombie);
}

int main(void)
{
	return (0);
}