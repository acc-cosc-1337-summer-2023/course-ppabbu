//write include statements

#include "decisions.h"

#include <iostream>

int main() 
{

	char letter = get_letter_grade_using_switch(57);

	std::cout << "grade is:" << letter << std::endl;

	return 0;
}