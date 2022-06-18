#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	Account account; //create a variable type account
	cout<<account.get_balance()<<"\n";
	
	return 0;
}