//bank_account.h

class Account
{

public:
    Account(){}//default synthesized constructor
    Account(int b) : balance(b){/*empty code*/}
    //class function / method
    int get_balance()const {return balance;}


private: //access specifier
    int balance{0}; //variable-initialized to 0

};