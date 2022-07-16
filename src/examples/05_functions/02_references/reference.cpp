#include "reference.h"

void reference_parameter(int &num)
{
    num = 100;
}

void const_reference_variable(const int&num)
{
    //num = 1000; wont compile

}