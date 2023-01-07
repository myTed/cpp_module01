#include <iostream>
#include <string>
#include <iomanip>


int main(void)
{
    std::string str("HI THIS IS BRAIN");
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;


    std::cout << "=========스트링 주소=====================\n";
    std::cout << std::setw(20) << "by variable: " << &str << std::endl;
    std::cout << std::setw(20) << "by ptr: " << stringPTR << std::endl;
    std::cout << std::setw(20) << "by reference: " << &stringREF << std::endl;

    std::cout << "=========스트링 값=======================\n";
    std::cout << std::setw(20) << "by variable: " << str << std::endl;
    std::cout << std::setw(20) << "by ptr: " << *stringPTR << std::endl;
    std::cout << std::setw(20) << "by reference: " << stringREF << std::endl;

    return (0);
}