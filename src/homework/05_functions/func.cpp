//FUNC.CPP
//add include statements
#include "func.h"
#include<iostream>
#include<vector>
using namespace std;
//add function code here
int get_vector_max_value(vector<int>vec) {
    int max = - 999999;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>max) {
            max = vec[i];
        }
    }
    return max;
}
vector<int> get_square_of_each_element(vector<int> vec) {
    vector<int>square;
    for(int i = 0;i<vec.size();i++) {
        square.push_back(vec[i]*vec[i]);

    }
    return square;
}