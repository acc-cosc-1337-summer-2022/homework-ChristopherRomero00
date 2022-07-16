#include "void.h"
#include<iostream>

using std::cout;

int num = 100; //global variable stored in global memory---these cause problems

int main()
{
    //int num = 5;
    //void_param(num);
    function_scope();
    cout<<"Global num: "<<num<<"\n";
    return 0;
}

