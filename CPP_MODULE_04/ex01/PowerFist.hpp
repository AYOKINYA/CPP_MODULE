#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist();
			PowerFist(const PowerFist &copy);
			PowerFist &operator=(const PowerFist &powerfist);
			virtual ~PowerFist();
			void	attack() const override;
};

#endif