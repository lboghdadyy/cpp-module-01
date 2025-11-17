# include <iostream>
# include <fstream>
# include <cstring>

class Finder
{
    private:
        std::ifstream file;
        std::string   search;
        std::string   replace;
        std::string   input;
        std::ofstream output;
    public:
        void    FindAndReplace(void);
        void    readData(void);
        Finder(std::string s, const std::string search, const std::string replace);
};
