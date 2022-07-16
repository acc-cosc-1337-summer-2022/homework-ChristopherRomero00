//bank_account.h
#include<iostream>

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance{b}{}
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}
private:
    int branch_balance;
};

#endif

//header gaurds- use when you use class
#ifndef ACCOUNT_H
#define ACCOUNT_H

enum transaction{ DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};
enum class MENU_OPTION{DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};

class Account
{

friend void show_balance(Account account);
friend void BranchBank::update_balance(int b);
friend std::ostream& operator<<(std::ostream& out, const Account& account);
friend std::istream& operator>>(std::istream& in, Account& account);

public:
    Account() = default; //default synthesized constructor
    Account(int b) : balance(b){/*empty code*/}
    //class function / method
    virtual int get_balance() const{return balance;}
    virtual void deposit(int amount) final; // cant be overridden by derived classes
    virtual void withdraw(int amount); 
    static int get_bank_balance(){return bank_balance;}

protected:
    int some_value{10};
    void display_something()const{}

private: //access specifier
    int balance{0}; //variable-initialized to 0
    static int bank_balance;
};

//FREE FUNCTIONS-NOT CLASS FUNTIONS!!!!
void display_balance(Account account);
Account get_account();

#endif