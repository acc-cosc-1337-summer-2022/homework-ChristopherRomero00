#include "default.h"
#include<iostream>

using std::cout;

int main()
{
    cout<<get_total()<<"\n";
    cout<<get_total(10)<<"\n";
    cout<<get_total(10, .1)<<"\n";

    return 0;
}