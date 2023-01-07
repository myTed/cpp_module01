#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *pZombie = new Zombie[N];
    for (int idx = 0; idx < N; idx++)
        pZombie[idx].setName(name);
    return (pZombie);
}