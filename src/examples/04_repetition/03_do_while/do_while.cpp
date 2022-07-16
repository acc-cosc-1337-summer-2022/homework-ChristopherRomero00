#include "do_while.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'n';

    do
    {
        cout<<"Do you want to continue? ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
}

void display_menu()
{
    cout<<"1-Accounts Recievable\n";
    cout<<"2-Accounts Payable\n";
    cout<<"3-Payroll\n";
    cout<<"4-Exit\n";
}

void run_menu()
{
    auto choice = 0;

    do
    {
        display_menu();
        cout<<"enter menu option ";
        cin>>choice;
        /* code */
    } while (choice != 4);
    
}
