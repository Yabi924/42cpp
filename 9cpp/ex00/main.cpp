#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cerr << "Error, follow: ./btc filename" << endl;
        return (1);
    }

    std::ifstream infile(argv[1]);
    if (!infile.is_open())
    {
        cerr << "Can't open " << argv[1] << "." << endl;
        return (1);
    }
    BitcoinExchange a;

    string line;
    std::getline(infile, line);
    while (std::getline(infile, line))
        if (!a.validDateValue(line))
            cerr << RED << "Error : " << line << RESETEND;
    return (0);
}
