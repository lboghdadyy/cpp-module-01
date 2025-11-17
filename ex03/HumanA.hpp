# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&w1;
	std::string	name;
public:
	void	attack();
    HumanA(std::string str, Weapon &wep1);

};
