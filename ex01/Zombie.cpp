#include "Zombie.hpp"

void Zombie::setName(const std::string& name)
{
    _name = name;
}

Zombie::Zombie(void){
    std::cout << "Deafult 생성자!\n";
}

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