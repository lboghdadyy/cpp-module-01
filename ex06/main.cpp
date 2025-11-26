# include "Harl.hpp"

int main(int ac, char * av[])
{
    Harl harl;

    if (ac != 2)
        return (std::cout << "please enter one arguments\n", 1);
    std::string s = av[1];
    harl.complain(s);
}