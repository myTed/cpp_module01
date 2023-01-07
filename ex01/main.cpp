#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{

    Zombie *pZombie = zombieHorde(10, "AAA");

    for (int idx = 0; idx < 10; idx++)
        pZombie->announce();
        
    delete []pZombie;
    
    return (0);
}