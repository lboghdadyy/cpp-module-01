# include "Weapon.hpp"

std::string Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string name)
{
    this->type = name;
}

Weapon::Weapon(void)
{
    
}