# include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::SetName(std::string string)
{
    this->name = string;
}

Zombie::~Zombie()
{
    std::cout << "This Zombie " << this->name << " has been destroyed" << std::endl;  
}

Zombie::Zombie(std::string string)
{
    this->name=string;
}

Zombie::Zombie(){}