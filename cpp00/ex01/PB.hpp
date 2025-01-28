#ifndef PB_HPP
# define PB_HPP

# include "contact.hpp"
# include <iostream>

class PhoneBook
{
    private:
    Contact contact[8];
    int index;
    int flag;

    public:
    PhoneBook(void);
    void set_contact(void);
    void get_contact(void);
    void table(void);
    void print_contact(std::string);
};

#endif
