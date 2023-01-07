#ifndef __SED_HPP
#define __SED_HPP
#include <string>
class Sed{
public:
    void replace(std::ifstream& fin, std::ofstream& fout, 
        const std::string& findStr, const std::string& replaceStr);
};
#endif