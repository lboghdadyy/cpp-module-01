# include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->w1.getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon wep)
{
    this->w1 = wep;
}