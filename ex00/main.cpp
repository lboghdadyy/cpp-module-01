# include "Zombie.hpp"

int main()
{
   Zombie *obj;

   randomChump("Foo");
   obj = newZombie("soufiane");
   obj->announce();
   delete obj;
}