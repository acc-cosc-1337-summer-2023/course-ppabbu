//write include statements
#include "repetition.h"
#include <iostream>
//write using statements
using namespace std;
int main() 
{
	string dna = "";
	while(dna!="y" && dna!="Y"){
		cout<<"Enter DNA :";
		cin>>dna;
		cout<<get_gc_content(dna)<<endl;
	}
	return 0;
}
