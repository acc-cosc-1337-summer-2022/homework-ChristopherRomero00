#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "reference.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test that value parameters generate a copy of the param")
{
	int num = 5;
	value_param(num);

	REQUIRE(num == 5);
}

TEST_CASE("Test that the reference parameters modify original variable")
{
	int num = 5;
	reference_parameter(num);

	REQUIRE(num ==100);

}