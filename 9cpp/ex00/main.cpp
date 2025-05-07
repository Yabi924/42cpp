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
    string file;
    if (std::getline(infile, file))
        if (file != "date,exchange_rate")
            return (1);
    while (std::getline(infile, file))
        if (!a.validDate(file))
            return (1);
    return (0);
}
