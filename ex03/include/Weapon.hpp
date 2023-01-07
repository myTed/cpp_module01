#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(const std::string& type);
    const std::string&  getType(void) const;
    void setType(const std::string& type);
};
#endif
