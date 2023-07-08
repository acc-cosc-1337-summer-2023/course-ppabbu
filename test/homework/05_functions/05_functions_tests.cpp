#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing get_vector_max_value","get_vector_max_value"){
	vector<int>v1{5,7,-1,99,-100,10};
	REQUIRE(get_vector_max_value(v1) == 99);

	vector<int>v2{-50,0,-51,50,-99,-100};
	REQUIRE(get_vector_max_value(v2)==50);
}
TEST_CASE("testing get_square_of_each_element","get_square_of_each_element"){
	vector<int>v1{3,7,2,5,10};
	vector<int>expected1{9,49,4,25,100};
	vector<int>output1=get_square_of_each_element(v1);
	for(int i=0;i<v1.size();i++){
		REQUIRE(expected1[i]==output1[i]);

	}
	vector<int>v2{6,1,8,9,4};
	vector<int>expected2{36,1,64,81,16};
	vector<int>output2=get_square_of_each_element(v2);
	for(int i=0;i<v2.size();i++){
		REQUIRE(expected2[i]==output2[i]);
	}
}
