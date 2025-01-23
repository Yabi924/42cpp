#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PB.hpp"

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    void set_first_name(std::string);
    void set_last_name(std::string);
    void set_nick_nime(std::string);
    void set_phone_number(std::string);
    void set_secret(std::string);
};

#endif