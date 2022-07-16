//atm.cpp 
#include "atm.h"

using std::cout;
using std::cin;

void ATM::display_balance()
{
    cout<<"Your balance is: "<<accounts[account_index].get_balance()<<"\n";
} 

void ATM::make_deopsit()
{
    int amount = rand() % 100 + 1;
    cout<<"Validate deposit amount: "<<amount<<"\n"; //generates between 1 and 100
    accounts[account_index].deposit(amount);
}

void ATM::make_withdraw()
{
    int amount;
    cout<<"Enter withdraw amount: ";
    cin>>amount;

    accounts[account_index].withdraw(amount);

}

void ATM::scan_card()
{
    account_index = rand() % accounts.size();
}


//FREE FUNCTIONS - NOT PART OF THE ATM CLASS!!!!
void run_menu(ATM &atm)
{ 
    Account account(500);

    auto choice = 'y';
    auto confirm = 'y';
    int menu_choice = 0;

    do
    {
        atm.scan_card();

        do
        {
            display_menu();

            cin>>menu_choice;

            //Call ATM functions here
            handle_transaction(atm, menu_choice);

            cout<<"Continue?";
            cin>>choice;
        } while (choice == 'y' || choice == 'Y');

        cout<<"Confirm Exit? ";
        cin>>confirm;
        
    } while(confirm =='y' || confirm == 'Y');

}
void display_menu()
{
    cout<<"1) Make Deposit\n";
    cout<<"2) Make Withdraw\n";
    cout<<"3) Display Balance\n";
    cout<<"4) Exit\n\n";
    cout<<"Enter your choice: ";
}

void handle_transaction(ATM &atm, int choice_p)
{

    switch(static_cast<MENU_OPTION>(choice_p))
    {
        case MENU_OPTION::DEPOSIT:
            atm.make_deopsit();
            break;
        case MENU_OPTION::WITHDRAW:
            atm.make_withdraw();
            break;
        case MENU_OPTION::DISPLAY:
            atm.display_balance();
            break;
        case MENU_OPTION::EXIT:
            cout<<"Exiting...";
            break;
        default:
            cout<<"Invalid choice";
    }
}