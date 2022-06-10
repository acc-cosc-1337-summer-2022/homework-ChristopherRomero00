//write include statements
#include <iomanip>
#include "hwexpressions.h"


//write namespace using statement for cout
using std::cout;
using std::cin;
using std::setw; 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount,
	       tip_rate,
	       tip_amount,
	       tax_amount,
	       total;
	

	cout<<"Enter the Meal Amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the Tip Rate: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;


	cout<<"\nMeal Amount: "<<setw(3)<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<setw(8)<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<setw(4)<<tip_amount<<"\n";
	cout<<"Total: "<<setw(12)<<total<<"\n";

	return 0;
}
