#include"static.h"

void static_var()
{
    static int cnt = 0;
    std::cout<<"var "<<cnt<<"\n";\
    cnt++;
}
void static_var1()
{
    static int cnt = 0;
    std::cout<<"var "<<cnt<<"\n";\
    cnt++;
}