#include<iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums{10, 5, 2}; //create a vector in it to 3 elements
    cout<<nums[0]<<"\n";
    cout<<"\nThe size of nums is: "<<nums.size()<<"\n";

    for(auto n: nums)
    {
        cout<<n<<"\n";
    }

    vector<double> decimals;// create an empty vecto
    decimals.push_back(5.5);
    decimals.push_back(98.5);
    decimals.push_back(10.1);

    for(auto d: decimals)
    {
        cout<<d<<"\n";
    }
    cout<<"\n";

    vector<int> nums2(10, 1);
    nums2[5] = 10; //referencing the actual address of the element

    for (auto n: nums2)
    {
        cout<<n<<"\n";
    }

    cout<<"\nThe size of nums2 is: "<<nums2.size()<<"\n";

    return 0;
}