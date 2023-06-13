//write include statements

#include "decisions.h"

#include <iostream>

int main() 
{

	char letter = get_letter_grade_using_if(97);

	std::cout << "grade is:" << letter << std::endl;

	return 0;
}