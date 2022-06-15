#include<iostream>
#include<string> //must be included for string

using std::string; // this too
using std::cout;


int main()
{
    string name = "C++";
    cout<<name<<"\n";

    string name1 = "   ";
    name1[0] = 'C';
    name1[1] = '+';
    name1[2] = '+';
    cout<<name1<<"\n";

    string name2(name);
    cout<<name2<<"\n";

    string name3;
    name3.append("C");
    name3.append("+");
    name3.append("+");
    cout<<name3<<"\n";

    string name4;
    name4.push_back('C');
    name4.push_back('+');
    name4.push_back('+');
    cout<<name4<<"\n";

    string name5(10, 'C');
    cout<<name5<<"\n";

    string str = "abcdefghi";
    string name6(str, 5, 2);
    cout<<name6<<"\n";
    cout<<name6[1]<<"\n";
    

    return 0;
}