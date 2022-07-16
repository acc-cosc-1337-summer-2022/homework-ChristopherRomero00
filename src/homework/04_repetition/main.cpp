//write include statements
#include<iostream>
#include"dna.h"
//write using statements
using std::cout;
using std::cin;
using std::string;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice;
	string dna;
	do
	{
		cout<<"---------------------------\n";
		cout<<"1) Get GC Content\n";
		cout<<"2) Get DNA Complement\n";
		cout<<"   (Y / y to exit)\n";

		cout<<"Enter your choice: ";
		cin>>choice;

		if(choice!='Y' && choice!='y')
		{
           cout<<"\nEnter DNA string: ";
           cin>>dna;
        
			switch(choice)
			{
        	case '1':
           		cout<<"GC Content: "<<get_gc_content(dna) * 100 <<"%\n";
           		break;
        	case '2':
           		cout<<"DNA Complement: "<<get_dna_complement(dna) <<"\n";
           		break;
        	default:
           		cout<<"\nInvalid choice\n";
           		break;
			}
        }
	} while(choice != 'Y' && choice != 'y');

	cout<<"\n---------------------------";
	cout<<"\nYou have exited the program";
	cout<<"\n---------------------------";
	
	return 0;
}