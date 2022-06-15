#include "default.h"

double get_total(double amount, double rate)
{
    return amount * rate;
}

double get_weekly_pay(double hours, double rate)
{
    return hours * rate;
}

double get_weekly_pay(double salary)
{
    return salary / 12;
}