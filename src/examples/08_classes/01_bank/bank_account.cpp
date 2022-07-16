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

//Initialize static bank balance
int Account::bank_balance = 1000;

//freind functions
void show_balance(Account account)
{
    //account.balance = 10;
    std::cout<<"freind function: "<<account.get_balance()<<"\n"; // can use galance and get_balance bc its a friend funtion

}

std::ostream& operator<<(std::ostream& out, const Account& account)
{
    out<<"Overload << Function: "<<account.balance<<"\n";
    return out;
}

std::istream& operator>>(std::istream& in, Account& account)
{
    int amount;
    std::cout<<"Enter amount to withdraw: ";
    in>>amount;
    account.withdraw(amount);
    
    return in;
}

//BRANCH BANK CLASS FUNCTIONS
void BranchBank::update_balance(int b)
{
    branch_balance += b;
    Account::bank_balance += b;
}

//FREE FUNCTION - NOT PART OF THE ACCOUNT CLASS
void display_balance(Account account)
{

    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";  // cant use balance because balance is private
    account.deposit(50);//copy-will not modify
    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";
}

Account get_account()
{
    Account account;
    return account;
}