#include "Human.hpp"

void    Human::meleeAttack(std::string const & target)
{
    std::cout << "meleeAttack on ";
    std::cout << target << "!" << std::endl;
}

void    Human::rangedAttack(std::string const & target)
{
    std::cout << "rangedAttack on ";
    std::cout << target << "!" << std::endl;
}

void    Human::intimidatingShout(std::string const & target)
{
    std::cout << "intimidatingShout on ";
    std::cout << target << "!" << std::endl;
}

void    Human::action(std::string const & action_name, std::string const & target)
{
    int 	key;
    void    (Human:: *const ptrs_to_members[3])(std::string const & target) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };

	key = -1;
    if (action_name == "meleeAttack")
        key = 0;
    else if (action_name == "rangedAttack")
        key = 1;
    else if (action_name == "intimidatingShout")
        key = 2;
    else
        throw ("Not a proper action!");
    (this->*ptrs_to_members[key])(target);
}
