#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name) : name(name), i_count(0)
{
	for (int i = 0; i < 4; ++i)
		this->inventory[i] = nullptr;
}

Character::~Character()
{
	for (unsigned int i = 0; i < this->i_count; ++i)
		delete (this->inventory[i]);
}

Character::Character(Character const & copy)
{
    this->name = copy.name;
	this->i_count = 0;

	for (unsigned int i = 0; i < copy.i_count; ++i)
		this->equip(copy.inventory[i]->clone());
	for (unsigned int i = this->i_count; i < 4; ++i)
		this->inventory[i] = nullptr;
}

Character & Character::operator=(Character const & character)
{
    if (this == &character)
        return (*this);

	for (unsigned int i = 0; i < this->i_count; ++i)
		delete (this->inventory[i]);

	this->name = character.name;
	this->i_count = 0;

	for (unsigned int i = 0; i < character.i_count; ++i)
		this->equip(character.inventory[i]->clone());
	for (unsigned int i = this->i_count; i < 4; ++i)
		this->inventory[i] = nullptr;

	return (*this);
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (m == nullptr || this->i_count > 3)
		return ;
	for (unsigned int i = 0; i < this->i_count; i++)
		if (this->inventory[i] == m)
			return ;	
	this->inventory[this->i_count] = m;
	++this->i_count;
}

void Character::unequip(int idx)
{
	if (idx < 0 || (unsigned int)idx + 1 > this->i_count || this->inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	--this->i_count;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || (unsigned int)idx + 1 > this->i_count || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}