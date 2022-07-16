#include"function_str.h"

void display_string(const std::string &str)
{
    for(auto i=0; i < str.size(); i++)
    {
        std::cout<<str[i]<<"\n";
    }
    
}