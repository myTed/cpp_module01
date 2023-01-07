#include <iostream>
#include <fstream>

void replace
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
    replace(fin, fout, argv[2], argv[3]);
    fin.close();
    fout.close();
    return (0);
}
