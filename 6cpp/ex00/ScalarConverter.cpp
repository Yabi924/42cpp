# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { *this = other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return *this; }

void ScalarConverter::convert(const str &input)
{
    cout << "char: ";
    {
        try
        {
            char c;
            if (input.length() == 1 && std::isalpha(static_cast<int>(input[0])))
                c = input[0];
            else if (input.back() != 'f' && std::isalpha(static_cast<int>(input.back())))
                throw std::exception();
            c = static_cast<char>(std::atoi(input.c_str()));
            if (!std::isprint(static_cast<int>(c)))
                cout << "Non displayable";
            else
                cout << c;
        }
        catch(const std::exception& e)
        {
            cout << "impossible";
        }
    }
    cout << endl;
}