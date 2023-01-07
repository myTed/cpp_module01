#include "Zombie.hpp"


Zombie::Zombie(const std::string &name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << ": " <<"I'm died!!...\n";
}

void    Zombie::announce(void)
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ...\n";
}