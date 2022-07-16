//write include statement for decisions header
#include"decisions.h"
#include<string>
#include<cstring>

using std::cout;
using std::cin;
using std::string;

//Write code for function(s) code here
int get_grade_points(char letter_grade)
{
    int credit_points = 0;

    switch (letter_grade)
    {
        case 'A':
        case 'a':
            credit_points = 4;
            break;
        case 'B':
        case 'b':
            credit_points = 3;
            break;
        case 'C':
        case 'c':
            credit_points = 2;
            break;
        case 'D':
        case 'd':
            credit_points = 1;
            break;
        case 'F':
        case 'f':
            credit_points = 0;
            break;
        default:
            cout<<"Invalid Grade"<<"\n";
            cout<<"Enter the letter grade for your class ( E to EXIT ): ";
            cin>>letter_grade;
            break;
        
    }
    return credit_points;
}

double calculate_gpa(int totalCreditHours, double totalCreditPoints)
{   
    return totalCreditPoints / totalCreditHours;
}
