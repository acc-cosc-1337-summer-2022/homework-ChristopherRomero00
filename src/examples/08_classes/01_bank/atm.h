//atm.h 
#include "bank_account.h"
#include<iostream>
#include<stdio.h> //NULL
#include<stdlib.h>//srand and rand - random numbers

class ATM
{
public:
    ATM(Account &a) : account(a){/*empty code block*/}
    void display_balance();
    void make_deopsit();
    void make_withdraw();

private:
    Account &account;
};

//FREE FUNCTIONS - NOT PART OF THE ATM CLASS!!!!!
void run_menu(ATM &menu);
void display_menu();
void handle_transaction(ATM& atm, transaction choice);