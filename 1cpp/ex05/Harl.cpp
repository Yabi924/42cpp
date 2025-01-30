#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "debug message" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info message" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning message" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error message" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*fun[4])() = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;
    
    while (++i < 4)
        if (command[i] == level)
            break ;
    if (i == 4)
        std::cout << "ok" << std::endl;
    else
        (this->*fun[i])();
}
