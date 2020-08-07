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

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
			name(name), apcost(apcost), damage(damage) {};

AWeapon::AWeapon(const AWeapon& copy)
{
	*this = copy;	
}

AWeapon& AWeapon::operator= (const Aweapon &aweapon)
{
	if (this == &aweapon)
		return (*this);
	this->name = aweapon.name;
	this->apcost = aweapon.apcost;
	this->damage = aweapon.damage;
	return (*this);
}

std::string AWeapon::getName() const
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