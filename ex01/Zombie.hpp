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

Zombie* zombieHorde( int N, std::string name );