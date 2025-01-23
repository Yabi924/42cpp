#ifndef PB_HPP
# define PB_HPP

# include "contact.hpp"
# include <iostream>

class PhoneBook
{
    private:
    Contact contact[8];
    int index;

    public:
    void set_contact(void);
    void get_contact(void);

};

#endif
