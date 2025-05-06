#include "BitcoinExchange.hpp"

bool validDate(string line)
{
    if (std::count(line.begin(), line.end(), '-') != 2)
        return false;
    // if ()
    return true;
}
// bool validValue(string line)
// {

// }

bool checking(string infile)
{
    // if (infile)
    if (validDate(infile))
        return (true);
    // else if (validValue(infile))
    //     return (true);
    return (false);
}

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

    // string file;
    // while (std::getline(infile, file))
    //     if (checking(file))
    //         return (1);
    
}
