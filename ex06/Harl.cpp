#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
    _funcName[0] = std::string("DEBUG");
    _funcName[1] = std::string("INFO");
    _funcName[2] = std::string("WARNING");
    _funcName[3] = std::string("ERROR");
}


void    Harl::debug(void) const
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger. "
    "I really do!\n\n";
}

void    Harl::info(void) const
{
    std::cout << "[ INFO ]\n";
    std::cout <<  "I cannot believe adding extra bacon costs more money. "
                "You didn’t put enough bacon in my burger! If you did, "
                "I wouldn’t be asking for more!\n\n";

}

void    Harl::warning(void) const
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. "
                "I’ve been coming for years whereas you started working "
                "here since last month.\n\n";
}

void    Harl::error(void) const
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

Harl::tComplain    Harl::getComplainSort(const std::string& level) const
{
    for (int idx = 0; idx < FUNC_NUM; idx++)
    {
        if (level == _funcName[idx])
            return static_cast<tComplain>(idx);
    }
    return (NONE);
}

void    Harl::filter(const std::string& level) const
{

    tComplain eComplain = getComplainSort(level);
    switch(eComplain)
    {
        case DEBUG:
            debug();
        case INFO:
            info();
        case WARNING:
            warning();
        case ERROR:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}

