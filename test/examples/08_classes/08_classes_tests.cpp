#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Acount balance initial value is 0")
{
	Account account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test account balance set via instructor")
{
	Account account(100);

	REQUIRE(account.get_balance() == 100);
} 

TEST_CASE("Test account deposite class function")
{
	Account account(100);

	REQUIRE(account.get_balance() == 100);

	account.deposit(50);

	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test account withdraw class funtion")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(20);
	REQUIRE(account.get_balance() == 80);
}

TEST_CASE(" test account deposites and withdraws")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(40);
	REQUIRE(account.get_balance() == 110);
}

TEST_CASE("Test account withdraw with negative value")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account withdraw with amount greater than balance")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(120);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account deposit with negative numbers")
{
	Account account(100);

	REQUIRE(account.get_balance() == 100);

	account.deposit(-50);

	REQUIRE(account.get_balance() == 100);
}