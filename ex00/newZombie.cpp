# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *temp;

    temp = new(Zombie);
    temp->SetName(name);
    return (temp);
}