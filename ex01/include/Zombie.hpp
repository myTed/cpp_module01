#ifndef __ZOMBIE_HPP
#define __ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie();
    void setName(const std::string& name);
    Zombie(const std::string& name);
    ~Zombie();
    void    announce(void);
};

#endif