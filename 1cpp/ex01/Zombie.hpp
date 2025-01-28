#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string Zombie_name;

    public:
    Zombie();
    ~Zombie();
    static Zombie *zombieHorde(int N, std::string name);
    void    setname(std::string name);
    void    announce(void);
};

#endif