#include "Human.hpp"

int main(void)
{
    Human human;

    try
	{
		human.action("meleeAttack", "A");
		human.action("rangedAttack", "B");
		human.action("intimidatingShout", "C");
		human.action("XXXXXXXXXXX", "D");
	}
	catch (char const *e)
	{
		std::cerr << "Human actions exception: " << e << std::endl;
	}
	return (0);
}