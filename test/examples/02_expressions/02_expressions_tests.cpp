#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "multi_assign.h"
#include "expressions.h"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function multiply numbers")
{
	REQUIRE(multiply_numbers(10) == 50);
	REQUIRE(multiply_numbers(2) == 10);
}

TEST_CASE("Test operator precedence no parentesis params: 12, 6, 3")
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
}

TEST_CASE("Test operator precedence with parentesis params: 12, 6, 3")
{
	REQUIRE(operator_precedence_2(12, 6, 3) == 6);
}

TEST_CASE("Test that convert to double function returns a double(decimal)")
{
	REQUIRE(convert_to_double(10, .51) == 5.1);
}

TEST_CASE("Test function convert double to int to verify that it's a whole number")
{
	REQUIRE(convert_to_double(5.1) == 5);
}

TEST_CASE("Test get area function")
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}