# include "Finder.hpp"


int main(int ac, char *av[])
{
    if (ac != 4)
        return (std::cout << "please only 3 arguments\n", 1);
    Finder program(av[1], av[2], av[3]);
    program.readData();
    program.FindAndReplace();
}