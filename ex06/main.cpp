#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "프로그램명 <level>\n";
        return (1);
    }
    Harl harl;

    harl.filter(argv[1]);
    
    return (0);
}