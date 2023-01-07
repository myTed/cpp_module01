#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
    _name = name;
    _pWeapon = 0;
}

void HumanB::setWeapon(Weapon &rWeapon)
{
    _pWeapon = &rWeapon;
}


void    HumanB::attack()
{
    std::cout << _name << " ";
    std::cout << "attacks with their ";
    if (_pWeapon == 0)
        std::cout << "NULL" << std::endl;
    else
        std::cout << _pWeapon->getType() << std::endl;
}
