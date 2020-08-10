#include "Squad.hpp"

Squad::Squad() : marines(nullptr), n_unit(0)
{}

Squad::Squad(Squad const &copy)
{
	t_list  *elem;

	this->marines = nullptr;
	this->n_unit = 0;
	elem = copy.marines;
	while (elem != 0)
	{
		this->push(elem->unit);
		elem = elem->next;
	}
}

Squad& Squad::operator=(Squad const &squad)
{
	t_list  *elem;
	t_list	*before;

	elem = this->marines;
	while (elem != 0)
	{
		free(elem->unit);
		before = elem;
		elem = elem->next;
		free(before);
	}
	this->marines = nullptr;
	this->n_unit = 0;
	elem = squad.marines;
	while (elem != 0)
	{
		this->push(elem->unit);
		elem = elem->next;
	}
	return (*this);
}   

Squad::~Squad()
{
	t_list  *elem;
	t_list	*before;

	elem = this->marines;
	while (elem != 0)
	{
		delete (elem->unit);
		before = elem;
		elem = elem->next;
		delete (before);
	}
	this->marines = 0;
	this->n_unit = 0;
}

int Squad::getCount() const
{
	return (this->n_unit);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	t_list	*elem;
	int		idx;

	if (N >= this->n_unit)
		return (nullptr);
	elem = this->marines;
	idx = 0;
	while (idx < N)
	{
		elem = elem->next;
		++idx;
	}
	return (elem->unit);
}

int Squad::push(ISpaceMarine *ispacemarine)
{
	t_list *elem;
	t_list *new_elem;

	if (ispacemarine == 0)
		return (this->n_unit);
	elem = this->marines;
	while (elem != 0 && elem->next != 0)
	{
		if (elem->unit == ispacemarine)
			return (this->n_unit);
		elem = elem->next;
	}
	new_elem = new t_list();
	new_elem->unit = ispacemarine;
	new_elem->next = nullptr;
	if (elem == 0)
		this->marines = new_elem;
	else
		elem->next = new_elem;
	return (++this->n_unit);
}

