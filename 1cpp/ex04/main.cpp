#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "please follow ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error file opening!" << std::endl;
        return 1;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error creating output file" << std::endl;
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    while (std::getline(infile, line))
    {
        replace(line, s1, s2);
        outfile << line << std::endl;
    }
    return 0;
}
