#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
 
    std::string filename = argv[1];
    std::ifstream ifs (filename);
    
    if (!ifs.is_open())
        return (1);
    
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string mytext;
    std::string line;
    
    while ( std::getline (ifs,line) )
    {
      mytext.append(line).append("\n");
    }
    mytext = mytext.substr(0, mytext.size()-1);
    size_t  pos(0);
    size_t  prev_pos(pos);
    std::string		repl_file = filename.append(".replace");
	std::ofstream	ofs(repl_file);
    while (true)
    {
        pos = mytext.find(s1, pos);
        ofs << mytext.substr(prev_pos, pos - prev_pos);
        if (pos == std::string::npos)
            break;
        ofs << s2;
        pos += s1.size();
        prev_pos = pos;
    }
    return (0);
}