<<<<<<< HEAD
#include "AWeapon.hpp"

AWeapon::AWeapon()
{};
=======
#include <string>
#include <iostream>

class AWeapon
{
	private:
			std::string name;
			int			apcost;
			int			damage;
	public:
			AWeapon() {};
			AWeapon(std::string const &name, int apcost, int damage);
			Aweapon(const Aweapon &copy);
			Aweapon& operator=(const Aweapon &aweapon);
			virtual ~Aweapon() {};
			std::string getName() const;
			int getAPCost() const;
			int getDamage() const;
			virtual void attack() const = 0;
};
>>>>>>> 04a893e753f2969706bac5a5eb3c5a3f5ebf1185

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
			name(name), apcost(apcost), damage(damage) {};

AWeapon::AWeapon(const AWeapon& copy)
{
	*this = copy;	
}

<<<<<<< HEAD
AWeapon& AWeapon::operator= (const AWeapon &aweapon)
=======
AWeapon& AWeapon::operator= (const Aweapon &aweapon)
>>>>>>> 04a893e753f2969706bac5a5eb3c5a3f5ebf1185
{
	if (this == &aweapon)
		return (*this);
	this->name = aweapon.name;
	this->apcost = aweapon.apcost;
	this->damage = aweapon.damage;
	return (*this);
}

<<<<<<< HEAD
AWeapon::~AWeapon()
{};

std::string const AWeapon::getName() const
=======
std::string AWeapon::getName() const
>>>>>>> 04a893e753f2969706bac5a5eb3c5a3f5ebf1185
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}