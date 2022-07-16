//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public Account
{
public:
    CheckingAccount() = default;
    explicit CheckingAccount(int b) : Account(b){}
    int get_balance()const override;
}; 

#endif