//write include statements
#include"decisions.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
    char letter_grade;
    int totalCreditPoints = 0;
    int credit_points = 0;
    int creditHours;
    int totalCreditHours = 0;
    double gpa = 0;

    do
    {
     cout<<"Enter the letter grade for your class ( E to EXIT ): ";
     cin>>letter_grade;
     if (letter_grade == 'E' || letter_grade == 'e')
     {
         continue;
     }
     
     credit_points = get_grade_points(letter_grade);
     totalCreditPoints += credit_points;

     cout<<"Enter the credit hours for this class:  ";
     cin>>creditHours;
     totalCreditHours += creditHours;

    } while(letter_grade != 'E' && letter_grade != 'e');  
    cout<<"The total number of credit hours is "<<totalCreditHours <<", and total credit points is "<<totalCreditPoints<<".";

    gpa = calculate_gpa(totalCreditHours, totalCreditPoints);
    cout<<"\nThe GPA is: "<<gpa;
    
}