//bank_account.cpp
#include "bank_account.h"
#include<iostream>

void Account::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if (amount > 0 && amount < balance)
    {
        balance -= amount;
    }
}



//FREE FUNCTION - NOT PART OF THE ACCOUNT CLASS
void display_balance(Account account)
{
    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";
    account.deposit(50);//copy
    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";
}

Account get_account()
{
    Account account;
    return account;
}