#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{

    Zombie *pZombie = newZombie("AAA");
    pZombie->announce();

    randomChump("BBB");

    delete pZombie;
    
    return (0);
}