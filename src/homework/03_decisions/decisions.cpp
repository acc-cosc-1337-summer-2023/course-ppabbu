//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
char get_letter_grade_using_if(int grade)
{
    char letter;

    if(grade>89) {
        letter = 'A';
    }
    else if(grade>79) {
        letter = 'B';
    }
    else if(grade>69) {
         letter = 'C';
    }
    else if(grade>59) {
        letter = 'D';
    }
    else{
        letter = 'F';
    }

    return letter;
}