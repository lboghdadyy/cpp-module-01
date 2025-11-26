# include "Finder.hpp"

Finder::Finder(std::string s, const std::string search, const std::string replace)
{
    file.open(s.c_str());
    s += ".replace";
    output.open(s.c_str());
    this->search = search;
    this->replace = replace;
    input = "";
}

void    Finder::FindAndReplace(void)
{
    int len;
    int j;

    len = input.length();
    j = 0;
    while (j < len)
    {
        std::string s = input.substr(j, search.length());
        if (s == search)
        {
            output << replace;
            j += search.length();
        }
        else
        {
            output << input[j];
            j++;
        }
    }
    output.close();
}

void    Finder::readData(void)
{
    std::getline(this->file, input, '\0');
    file.close();
}
