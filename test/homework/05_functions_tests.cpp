#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
#include<vector>
using namespace std;
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_vector_max_value"){
	vector<int>v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(-1);
	v.push_back(99);
	v.push_back(-100);
	v.push_back(10);
	REQUIRE(get_vector_max_value(v)==99);
	vector<int>v2{-50,0,-51,50,-99,-100};
	REQUIRE(get_vector_max_value(v2)==50);
	vector<int>v3{3,7,2,5,10};
	vector<int>output1 = get_square_of_each_element(v3);
	for(int i = 0;i < v3.size();i++) {
		REQUIRE(output1[i]==v3[i]*v3[i]);

	}
	vector<int>v4{ 6,1,8,9,4};
	vector<int>output2 = get_square_of_each_element(v4);
	for(int i = 0;i<v4.size();i++) {
		REQUIRE(output2[i]==v4[i]*v4[i]);
	}
}
