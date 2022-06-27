#include "atm.h"
#include "bank_account.h"
#include<iostream>
#include<stdio.h> //NULL
#include<time.h> // Time

using std::cout;

int main()
{
	//Set the randomizer seed value
	srand(time(NULL));
	Account account(500);
	ATM atm(account); 

	run_menu(atm);

	cout<<"main: "<<account.get_balance()<<"\n";

	/*Account account; //create a variable of type account
	cout<<account.get_balance()<<"\n";

	cout<<"Deposite 50\n";
	account.deposit(50);

	cout<<account.get_balance()<<"\n";

	display_balance(account);

	cout<<account.get_balance()<<"\n";
	
	return 0;*/
} 