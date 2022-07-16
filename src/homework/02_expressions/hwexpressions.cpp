#include "hwexpressions.h"

using std::cout;
using std::cin;

double get_sales_tax_amount(double meal_amount)
{
	return meal_amount * tax_rate;

}

double get_tip_amount(double meal_amount, double tip_rate)
{
		return meal_amount * tip_rate;
}
//write function code here




