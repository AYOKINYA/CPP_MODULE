#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
			PlasmaRifle();
			PlasmaRifle(const PlasmaRifle &copy);
			PlasmaRifle& operator=(const PlasmaRifle &plasmarifle);
			virtual ~PlasmaRifle();
			virtual void	attack() const override;
};

#endif