#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < argc)
    {
        int j = 0;
        while (argv[i][j])
        {
            char c = argv[i][j];
            if (c >= 'a' && c <= 'z')
                c -= 32;
            std::cout << c;
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return 0; 
}
