//atm.h 
#include "bank_account.h" // the ATM class knows what class "Accoutn means"
#include<iostream>
#include<stdlib.h>//srand and rand - random numbers
#include<vector>

class ATM
{
public:
    ATM(std::vector<Account> &a) : accounts(a){/*empty code block*/}
    void display_balance();
    void make_deopsit();
    void make_withdraw();
    void scan_card();

private:
    //Account account;
    std::vector<Account> &accounts;
    int account_index{0};
};

//FREE FUNCTIONS - NOT PART OF THE ATM CLASS!!!!!
void run_menu(ATM &menu);
void display_menu();
void handle_transaction(ATM& atm, int choice);