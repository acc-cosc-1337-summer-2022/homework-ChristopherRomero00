//bank_account.h
#include<iostream>

//header gaurds- use when you use class
#ifndef ACCOUNT_H
#define ACCOUNT_H

enum transaction{ DEPOSIT=1, WITHDRAW=2, DISPLAY=3, Exit=4};

class Account
{

public:
    Account() : Account(0){}//default synthesized constructor
    Account(int b) : balance(b){/*empty code*/}
    //class function / method
    int get_balance() const{return balance};
    void deposit(int amount);
    void withdraw(int amount); 

private: //access specifier
    int balance{0}; //variable-initialized to 0

};

//FREE FUNCTIONS-NOT CLASS FUNTIONS!!!!
void display_balance(Account account);
Account get_account();

#endif