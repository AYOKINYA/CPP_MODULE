#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;
	ZombieEvent	event;

	zombie1 = event.randomChump();
	zombie1->announce();
	delete(zombie1);

	zombie2 = event.randomChump();
	zombie2->set_type("UNDEAD");
	zombie2->set_speech("Arrrrrrrggggggg....");
	zombie2->announce();
	delete(zombie2);

	event.setZombieType("HALF");
	zombie3 = event.newZombie("zombie3");
	zombie3->announce();
	delete(zombie2);

	return (0);
}