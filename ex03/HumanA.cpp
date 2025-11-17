
# include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->w1.getType()  << std::endl;
}

HumanA::HumanA(std::string str, Weapon &wep): w1(wep)
{
	this->w1 = wep;
	this->name = str;
}
