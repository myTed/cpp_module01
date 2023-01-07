#ifndef __HUMAN_B_HPP
#define __HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    std::string _name;
    Weapon* _pWeapon;
public:
    HumanB(const std::string& name);
    void    setWeapon(Weapon &rWeapon);
    void    attack();
};

#endif
