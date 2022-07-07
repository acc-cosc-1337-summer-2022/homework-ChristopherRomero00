#include "atm.h"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"
#include<iostream>
#include<stdio.h> //NULL
#include<time.h> // Time
#include<vector>
#include<memory>


using std::cout;
using std::cin;
using std::vector;

using std::unique_ptr;
using std::make_unique;

int main()
{	
	//Set the randomizer seed "NULL" 
	srand(time(NULL));
	//BranchBank b_bank(500);
	Account account(50); // stack variable of type Account
	CheckingAccount sa(90); // stack variables, not dynamic memory---stack is limited
	Account* ptr_sa = &sa;
	cout<<sa.get_balance()<<"\n";// runs checking account balance
	cout<<ptr_sa->get_balance()<<"\n"; //runs chenccking account get balance

	vector<Account*> accounts1;
	accounts1.push_back(&sa);
	cout<<accounts1[0]->get_balance()<<"\n"; // which get balance is excecuted?

	unique_ptr<Account> up_account = make_unique<Account>(500);
	unique_ptr<Account> up_savings = make_unique<SavingsAccount>(100);
	unique_ptr<Account> up_checking = make_unique<CheckingAccount>(100);
	vector<unique_ptr<Account>> up_accounts;
	
	up_accounts.push_back(std::move(up_savings));
	up_accounts.push_back(std::move(up_checking));
	cout<<up_accounts[0]->get_balance()<<"\n";
	cout<<up_accounts[1]->get_balance()<<"\n";

	//cout<<account;
	//cin>>account;
	//cout<<account.get_bank_balance()<<"\n";

	//b_bank.update_balance(25);
	//cout<<account.get_bank_balance()<<"\n";


	std::vector<Account> accounts; // creates an empty vector of accounts using Account class
	accounts.push_back(Account(100));
	accounts.push_back(Account(200));
	accounts.push_back(Account(300));
	accounts.push_back(Account(400));
	accounts.push_back(Account(500));

	//ATM atm(accounts); 

	//run_menu(atm); 

	//display_balance(accounts[1]);
	//show_balance(accounts[1]);

	//cout<<"main: "<<account.get_balance()<<"\n"; 

	/*Account account; //create a variable type of Account -> account
	cout<<account.get_balance()<<"\n";

	cout<<"Deposite 50\n";
	account.deposit(50);

	cout<<account.get_balance()<<"\n";

	display_balance(account);

	cout<<account.get_balance()<<"\n";
	
	return 0;*/
} 