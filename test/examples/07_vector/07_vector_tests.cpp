#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector get sum of elements")
{
	std::vector<int> nums = {8, 3, 5};

	REQUIRE(sum_vector_elements(nums) == 16);
}

TEST_CASE("Test vector reference parameter and for range")
{
	std::vector<int> nums = {8, 3, 5};
	std::vector<int> expected = {8, 3, 5};
	display_elements(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("Test vector reference parameter and traditional for")
{
	std::vector<int> nums = {8, 3, 5};
	std::vector<int> expected = {10, 10, 10};
	display_elements_tf(nums);
 
	REQUIRE(nums == expected);
}