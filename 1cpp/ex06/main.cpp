#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "follow: ./harlFiler <level>" << std::endl;
        return 1;
    }
    Harl ehh;
    ehh.complain(argv[1]);
    return 0;
}