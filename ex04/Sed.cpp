#include "Sed.hpp"
#include <iostream>
#include <fstream>

void Sed::replace
(
    std::ifstream& fin,
    std::ofstream& fout,
    const std::string& findStr,
    const std::string& replaceStr
)
{
    int ch;
    std::string toCompare;

    while ((ch = fin.get()) != EOF)
    {
        toCompare += ch;
        if (toCompare.size() == findStr.size())
        {
            if (toCompare == findStr)
                fout << replaceStr;
            else
            {
                fout << toCompare[0];
                fin.seekg(-(findStr.size() - 1), std::ios_base::cur);
            }
            toCompare.clear();
        }
    }
	fout << toCompare;
}