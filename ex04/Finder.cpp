# include "Finder.hpp"

Finder::Finder(std::string s, const std::string search, const std::string replace)
{
    file.open(s);
    s += ".replace";
    output.open(s);
    this->search = search;
    this->replace = replace;
}

void    Finder::FindAndReplace(void)
{
    int len;
    int j;

    j = 0;
    len = input.length();
    std::cout << search.length();
    for (int j = 0; j < len; j++)
    {
        if (input[j] == search[0])
        {
            if (this->input.compare(input.at(j), search.length(), search.c_str()))
            {
                output << replace;
                j += search.length();
            }
        }
        else
            output << input[j];
    }
}

void    Finder::readData(void)
{
    std::string s;
    input = "";

    while (std::getline(this->file, s))
    {
        input += "\n";
        input += s;
    }
}
