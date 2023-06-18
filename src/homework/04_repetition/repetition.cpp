//add include statements
#include <cstring>
#include "repetition.h"
#include<iostream>
//add function(s) code here
double get_gc_content(const string & str){
    double count = 0;
    char c;
    for(int i = 0; i < str.length();i++){
    c = tolower(str[i]);
    if(c == 'c'||c == 'C'|| c == 'g'||c == 'G'){
        count ++;
    }
    }
    return count/str.length();
}
