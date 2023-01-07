#include "Sed.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "프로그램명 <infile> <findString> <replaceString>\n";
        return (1);
    }
    std::ifstream fin(argv[1]);
    std::ofstream fout(std::string(argv[1]).append(".replace").c_str());    
	if (!fin.is_open() || !fout.is_open())
    {
        std::cout << "파일을 열수 없습니다.\n";
        return (1);
    }
    Sed sed;
    sed.replace(fin, fout, argv[2], argv[3]);
    fin.close();
    fout.close();
    return (0);
}
