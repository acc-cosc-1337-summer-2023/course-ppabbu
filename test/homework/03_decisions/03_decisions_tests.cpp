#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);

}

TEST_CASE("Verify Grade A if","Verification") {
	REQUIRE(get_letter_grade_using_if(95) =='A');
}

TEST_CASE("Verify Grade B if","Verification") {
	REQUIRE(get_letter_grade_using_if(85) =='B');
}

TEST_CASE("Verify Grade C if","Verification") {
	REQUIRE(get_letter_grade_using_if(75) =='C');
}

TEST_CASE("Verify Grade D if","Verification") {
	REQUIRE(get_letter_grade_using_if(65) =='D');
}

TEST_CASE("Verify Grade F if ","Verification") {
	REQUIRE(get_letter_grade_using_if(55) =='F');
}



TEST_CASE("Verify Grade A switch","Verification") {
	REQUIRE(get_letter_grade_using_switch(95) =='A');
}

TEST_CASE("Verify Grade B switch","Verification") {
	REQUIRE(get_letter_grade_using_switch(85) =='B');
}

TEST_CASE("Verify Grade C switch","Verification") {
	REQUIRE(get_letter_grade_using_switch(75) =='C');
}

TEST_CASE("Verify Grade D switch","Verification") {
	REQUIRE(get_letter_grade_using_switch(65) =='D');
}

TEST_CASE("Verify Grade F switch","Verification") {
	REQUIRE(get_letter_grade_using_switch(55) =='F');
}
