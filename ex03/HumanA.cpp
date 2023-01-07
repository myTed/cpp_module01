
#include  "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, const Weapon &rWeapon)
: _rWeapon(rWeapon)
{
    _name = name;
}


void    HumanA::attack()
{
    std::cout << _name << " ";
    std::cout << "attacks with their ";
    std::cout << _rWeapon.getType() << std::endl;
}

