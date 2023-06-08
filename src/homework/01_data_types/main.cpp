//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;
	cout<<"Enter the Number=";
	cin>>num;
	int result;
	result = multiply_numbers(num);
	cout<<"Result = "<<result<<endl;
	int num1 = 4;
    result = multiply_numbers(num1);
	cout<<"Result = "<<result<<endl;
	return 0;
}
