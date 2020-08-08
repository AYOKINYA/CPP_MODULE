#include "Squad.hpp"


Squad::Squad() : marines(nullptr), n_unit(0)
{}

Squad::Squad(Squad const copy)
{
	*this = copy;
}

Tactical& Squad::operator=(Squad const &copy)
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
	elem = copy.marines;
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
		free(elem->unit);
		before = elem;
		elem = elem->next;
		free(before);
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
	t_list *elem;

	if (N >= this->n_unit)
		return (0);
	elem = this->marines;
	while (N--)
		elem = elem->next;
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
		elem = new_elem;
	else
		elem->next = new_elem;
	return (++this->n_unit);
}

