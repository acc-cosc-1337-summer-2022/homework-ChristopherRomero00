#include<iostream>

using std::cout;

int main()
{
    //int num = 5;
    //reference_parameter(num);  

    int num = 5;
    cout<<num<<"\n";
    cout<<"Size of num: "<<sizeof(num)<<"\n";
    cout<<"Memory address of num: "<<&num<<"\n";

    int &num_ref = num;
    cout<<"Value of num via num_ref: "<<num_ref<<"\n";
    num_ref = 10;
    cout<<"Value of num via num_ref: "<<num_ref<<"\n";

    return 0;
}