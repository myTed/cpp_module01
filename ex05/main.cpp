#include "Harl.hpp"


int main(void)
{

    Harl harl;

    //void (Harl::*mbFunc_ptr)(std::string level) = &Harl::complain;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("ajskdlfjk");
    //(harl.*mbFunc_ptr)("INFO");
    return (0);
}