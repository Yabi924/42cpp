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
    Harl harl;
    std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (++i < 4)
        if (command[i] == level)
            break ;
    switch (i)
    {
        case 0:
            harl.debug();
            /* fall through */
        case 1:
            harl.info();
            /* fall through */
        case 2:
            harl.warning();
            /* fall through */
        case 3:
            harl.error();
            /* fall through */
        case 4:
            std::cout << "ok" << std::endl;
    }
}
