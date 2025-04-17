# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { *this = other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return *this; }

bool isNanInf(const str &s)
{
    if (!s.compare("inf") || !s.compare("-inf") || !s.compare("+inf") \
        || !s.compare("inff") || !s.compare("-inff") || !s.compare("+inff") \
        || !s.compare("nan") )
        return true;
    return false;
}

int type(str s)
{
    int f = 0;
    if (s.length() == 0)
        return (1000);
    if (s.length() == 1 && !std::isdigit(static_cast<int>(s[0])))
        return (0);
    else if (s.find(".") == str::npos && s[s.length() - 1] != 'f')
    {
        if (s[0] == '-' || s[0] == '+')
        {
            if (std::count(s.begin(), s.end(), s[0]) != 1)
                return (1000);
            s = s.substr(1);
        }
        for (int i = 0; i < static_cast<int>(s.length()); i++)
            if (!std::isdigit(static_cast<int>(s[i])))
                f++;
        if (!f)
            return (1);
    }
    else if (s[s.length() - 1] == 'f' && std::count(s.begin(), s.end(), 'f') == 1)
    {
        if (std::count(s.begin(), s.end(), '.') != 1)
            return (1000);
        if (s[0] == '-' || s[0] == '+')
        {
            if (std::count(s.begin(), s.end(), s[0]) != 1)
                return (1000);
            s = s.substr(1);
        }
        for (int i = 0; i < static_cast<int>(s.length()) - 1; i++)
            if (!std::isdigit(static_cast<int>(s[i])) && s[i] != '.')
                f++;
        if (!f)
            return (2);
    } 
    else
    {
        if (std::count(s.begin(), s.end(), '.') != 1)
            return (1000);
        if (s[0] == '-' || s[0] == '+')
        {
            if (std::count(s.begin(), s.end(), s[0]) != 1)
                return (1000);
            s = s.substr(1);
        }
        for (int i = 0; i < static_cast<int>(s.length()); i++)
            if (!std::isdigit(static_cast<int>(s[i])) && s[i] != '.')
                f++;
        if (!f)
            return (3);
    }
    return (100);
}

void printAll(char c, int i, float f, double d)
{
    cout << "char:   ";
    if (!std::isprint(static_cast<int>(c)))
        cout << "Non displayable" << endl;
    else
        cout << "'" << c << "'" << endl;

    cout << "int:    " << i << endl;

    cout << "float:  " << f;
    if (f == static_cast<int>(f))
        cout << ".0";
    cout << "f" << endl;

    cout << "double: " << d;
    if (d == static_cast<int>(d))
        cout << ".0";
    cout << endl;
}

void ScalarConverter::convert(const str &input)
{
    cout << "detected input is " << GREEN;

    if (isNanInf(input) == true)
    {
        cout << input << RESETEND;
        cout << "char:   " << "impossible" << endl;
        cout << "int:    " << "impossible" << endl;
        if (!input.compare("nan") || !input.compare("inf") || !input.compare("-inf") || !input.compare("+inf"))
        {
            cout << "float:  " << input << 'f' << endl;
            cout << "double: " << input << endl;
        }   
        else
        {
            cout << "float:  " << input << endl;
            cout << "double: " << input.substr(0, input.length() - 1) << endl;
        }
        return ;
    }
    int dataType = type(input);
    switch (dataType)
    {
        case 0:
        {
            cout << "'char'" << RESETEND;
            printAll(input[0], static_cast<int>(input[0]), static_cast<float>(input[0]), static_cast<double>(input[0]));
            return ;
        }
        case 1:
        {
            cout << "'int'" << RESETEND;
            int i = std::atoi(input.c_str());
            printAll(static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(i));
            return ;
        }
        case 2:
        {
            cout << "'float'" << RESETEND;
            float f = std::atof(input.c_str());
            printAll(static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f));
            return ;
        }
        case 3:
        {
            cout << "'double'" << RESETEND;
            double d = std::strtod(input.c_str(), 0);
            printAll(static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d);
            return ;
        }
        default:
            cout << RED << "can't covert type" << RESETEND;
    }
}
