# include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[DEBUG] : I love having extra bacon for \
    my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
    Harl::info();
}

void    Harl::info(void)
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn’t put\
    enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
    Harl::warning();
}

void    Harl::warning(void)
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming for\
    years, whereas you started working here just last month.\n" << std::endl;
    Harl::error();
}

void    Harl::error(void)
{
    std::cout << "[ERROR] : This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

Harl::Harl(){}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         index;

    index = -1;
    for (int j = 0; j < 4; j++)
    {
        if (level == levels[j])
        {
            index = j;
            break ;
        }
    }
    switch (index)
    {
        case (0):
            Harl::debug();
            break ;
        case (1):
            Harl::info();
            break ;
        case (2):
            Harl::warning();
            break ;
        case (3):
            Harl::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}