#include "func.cpp"
#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	vector<int> v1{5,7,-1,99,-100,10};
	vector<int> v2{6,1,8,9,4};
	vector<int> output;
	int choice = 0;
	while(choice!=3){
		cout<<"1-get max value"<<endl;
		cout<<"2-get square of elements"<<endl;
		cout<<"3-exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			cout<<"max value is "<<get_vector_max_value(v1)<<endl;
			break;
			case 2:
			output = get_square_of_each_element(v2);
			cout<<"square values are"<<endl;
			for(int i=0;i<output.size();i++){
				cout<<output[i]<<" ";
			}
			cout<<endl;
			break;
			case 3:
			cout<<"bye"<<endl;
			break;
			default:
			cout<<"incorrect choice"<<endl;
		}
	}
	return 0;
}
