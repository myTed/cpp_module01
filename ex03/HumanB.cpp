#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
    _name = name;
}

void HumanB::setWeapon(Weapon &rWeapon)
{
    _pWeapon = &rWeapon;
}


void    HumanB::attack()
{
    std::cout << _name << " ";
    std::cout << "attacks with their ";
    std::cout << _pWeapon->getType() << std::endl;
}
