#ifndef __HUMAN_A_HPP
#define __HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string _name;
    const Weapon& _rWeapon;
public:
    HumanA(const std::string& name, const Weapon &rWeapon);
    void attack();
};

#endif
