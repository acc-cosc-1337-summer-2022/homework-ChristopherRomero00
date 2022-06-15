#include"for_ranged_str.h"

void for_ranged_str(const std::string &str)
{
    for(auto ch: str)
    {
        std::cout<<ch<<"\n"; //display each char in the str
    }
}