//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;


int main() 
{
	auto num = 0;
	cout<<"Enter a number ";
	cin>>num;

	auto result = is_even(num);
	
	if(result == true)
	{
		cout<<"Number "<<num<<" is even";
	}
	else
	{
		cout<<"Number "<<num<<" is odd";
	}
	
	
	return 0;
}