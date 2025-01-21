#ifndef ex01_h
# define ex01_h

#include <iostream>

class PhoneBook
{
    private:
    std::string first_name[8];
    std::string last_name[8];
    std::string nickname[8];
    int phone_number[8];
    std::string darkest_secret[8];
    int index;

    public:
    PhoneBook();
    void add_contact(void);
};

class Contact
{
    private:
    std::string person;

    public:

};

#endif