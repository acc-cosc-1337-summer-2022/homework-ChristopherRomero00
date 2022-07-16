#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	int &num_ref = num;

	cout<<"Num value via num_ref "<<num_ref<<"\n";
	cout<<"Num address: "<<&num<<"\n";
	cout<<"num_ref address pointed to: "<<&num_ref<<"\n";

	int num1 = 10;
	num_ref = num1;
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Num value via num_ref "<<num_ref<<"\n";
	cout<<"Num address: "<<&num<<"\n";
	cout<<"num_ref address pointed to: "<<&num_ref<<"\n";



	int* num_ptr = &num;
	cout<<"Num address: "<<&num<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"The value at the address that num_ptr points to: "<<*num_ptr<<"\n";
	cout<<"The address of num_ptr: "<<&num_ptr<<"\n";

	num_ptr = &num1;
	cout<<"Num address: "<<&num<<"\n";
	cout<<"Num1 address: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"The value at the address that num_ptr points to: "<<*num_ptr<<"\n";
	cout<<"The address of num_ptr: "<<&num_ptr<<"\n";


	return 0;
}