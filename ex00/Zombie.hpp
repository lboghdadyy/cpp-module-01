# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    void    SetName(std::string string);
    // Zombie(std::string string);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

// Zombie::~Zombie()
// {
// }
