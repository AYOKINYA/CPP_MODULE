#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde horde = ZombieHorde(20);
	std::cout << "Announcements from zombies:" << std::endl;
	horde.announce();

    std::cout << "WHEN N is -1 : ";
	ZombieHorde horde2 = ZombieHorde(-1);
	std::cout << "Announcements from zombies:" << std::endl;
	horde2.announce();
	return (0);
}