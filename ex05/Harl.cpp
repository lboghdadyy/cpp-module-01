# include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info(void)
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning(void)
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void    Harl::error(void)
{
    std::cout << "[ERROR] : This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl(void)
{
    this->ptr[0] = &Harl::debug;
    this->ptr[1] = &Harl::info; 
    this->ptr[2] = &Harl::warning;
    this->ptr[3] = &Harl::error;
    this->ptr[4] = NULL;
}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int j = 0; j < 4; j++)
    {
        if (level == levels[j])
        {
            (this->*ptr[j])();
            return ;
        }
    }
}