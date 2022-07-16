#include "void.h"

using std::cout;

void value_param(int num)
{
    num = 100;
    return;
}

void function_scope()
{
    int num = 10; // local variable or function variable
    cout<<"local function variable num: "<<num<<"\n";
}