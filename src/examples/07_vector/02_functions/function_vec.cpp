#include "function_vec.h"

int sum_vector_elements(std::vector<int> nums)
{
    auto sum = 0; //int

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}

void display_elements(std::vector<int> &nums)
{
    for( auto n: nums)
    {
        n = 10;
    }
}

void display_elements_tf(std::vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = 10; 
    }
}