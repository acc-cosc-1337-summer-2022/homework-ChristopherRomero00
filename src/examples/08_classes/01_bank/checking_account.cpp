//checking_account.cpp
#include"checking_account.h"

int CheckingAccount::get_balance()const
{
    display_something();
    return Account::get_balance() + 5;
}