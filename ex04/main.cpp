#include <iostream>
#include <fstream>
# include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    
    std::ifstream ifs (argv[1]);
    if (!ifs.is_open())
        return (1);

    std::string mytext;
    std::string line;
    while ( std::getline (ifs,line) )
    {
      mytext.append(line).append("\n");
    }
    std::cout << mytext;
    ifs.close();
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::size_t found = 0;
    


    return (0);
}