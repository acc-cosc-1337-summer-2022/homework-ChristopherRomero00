#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// board 3x3
TEST_CASE("Test if the game is a tie, verify the winner is C on board 3x3")
{ 
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->mark_board(1);                      
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1); //X                   X|O|O
	REQUIRE(game->game_over() == false);//     X| | 
	game->mark_board(2); //O                   X| | 
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X                   
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2); //X                  O|X|O
	REQUIRE(game->game_over() == false);//     |X|
	game->mark_board(1); //O                   |X|
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3); //X                     O|O|X
	REQUIRE(game->game_over() == false);//        | |X
	game->mark_board(1); //O                      | |X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1); //X                      X|X|X
	REQUIRE(game->game_over() == false);//        O|O|
	game->mark_board(4); //O                       | | 
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4); //X                     O|O| 
	REQUIRE(game->game_over() == false);//       X|X|X 
	game->mark_board(1); //O                      | |
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7); //X                   O|O|
	REQUIRE(game->game_over() == false);//      | |
	game->mark_board(1); //O                   X|X|X
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O    
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1); //X                   X|O|O
	REQUIRE(game->game_over() == false);//      |X|
	game->mark_board(2); //O                    | |X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X     
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7); //X                   |O|X
	REQUIRE(game->game_over() == false);//     |X|O
	game->mark_board(2); //O                  X| |
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X    
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O     
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X     

	REQUIRE(game->game_over() == true);
}

// board 4x4 ----------------------------------------------------------------------------------------------------
TEST_CASE("Test if the game is a tie, verify the winner is C on board 4x4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//X                         X|O|X|O
	REQUIRE(game->game_over() == false);//          X|O|X|O
	game->mark_board(2);//O                         X|O|X|O
	REQUIRE(game->game_over() == false);//	        O|X|O|X
	game->mark_board(3);//X
	REQUIRE(game->game_over() == false);	
	game->mark_board(4);//O
	REQUIRE(game->game_over() == false);	
	game->mark_board(5);//X	
	REQUIRE(game->game_over() == false);
	game->mark_board(6);// O
	REQUIRE(game->game_over() == false);	
	game->mark_board(7);//X
	REQUIRE(game->game_over() == false);	
	game->mark_board(8);// O
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(10);// O
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(12);// O
	REQUIRE(game->game_over() == false);
	game->mark_board(14);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(13);// O
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(15);// O	
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//X                       X|O|O|O
	REQUIRE(game->game_over() == false);//        X| | | 
	game->mark_board(2);//O                       X| | |
	REQUIRE(game->game_over() == false);//        X| | |
	game->mark_board(5);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false); 
	game->mark_board(9);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(4);//O
	REQUIRE(game->game_over() == false); 
	game->mark_board(13);//X
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win by second column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);//X                    O|X|O|O
	REQUIRE(game->game_over() == false);//      |X| |
	game->mark_board(1);//O                     |X| |
	REQUIRE(game->game_over() == false);//      |X| |
	game->mark_board(6);//X
	REQUIRE(game->game_over() == false);	
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false); 
	game->mark_board(10);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(4);//O
	REQUIRE(game->game_over() == false); 
	game->mark_board(14);//X
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);//X                    O|O|X|O
	REQUIRE(game->game_over() == false);//      | |X|
	game->mark_board(1);//O                     | |X|
	REQUIRE(game->game_over() == false);//      | |X|
	game->mark_board(7);//X  
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//O 
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//X 
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O 
	REQUIRE(game->game_over() == false);
	game->mark_board(15);//X 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by forth column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);//X                  O|O|O|X
	REQUIRE(game->game_over() == false);//    | | |X
	game->mark_board(1);//O                   | | |X
	REQUIRE(game->game_over() == false);//    | | |X
	game->mark_board(8);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//O  
	REQUIRE(game->game_over() == false);
	game->mark_board(12);//X 
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//X 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//X                    X|X|X|X 
	REQUIRE(game->game_over() == false);//	   O|O|O|
	game->mark_board(5);//O                     | | | 
	REQUIRE(game->game_over() == false);//      | | |
	game->mark_board(2);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//X	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);//X                   O|O|O|
	REQUIRE(game->game_over() == false);//    X|X|X|X
	game->mark_board(1);//O                    | | |
	REQUIRE(game->game_over() == false);//     | | |
	game->mark_board(6);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//X
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by third row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);//X                  O|O|O|
	REQUIRE(game->game_over() == false);//    | | |
	game->mark_board(1);//O                  X|X|X|X
	REQUIRE(game->game_over() == false);//    | | |
	game->mark_board(10);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(12);//X
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by the fourth row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);//X                  O|O|O|
	REQUIRE(game->game_over() == false);//     | | |
	game->mark_board(1);//O                    | | |
	REQUIRE(game->game_over() == false);//    X|X|X|X
	game->mark_board(14);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(15);//X
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//X
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from top left 4 ")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//X                   X|O|O|O
	REQUIRE(game->game_over() == false);//     |X| |
	game->mark_board(2);//O                    | |X| 
	REQUIRE(game->game_over() == false);//     | | |X
	game->mark_board(6);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(11);//X	 
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(16);//X
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win diagonally from top left 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);//X                    O|O|O|X
	REQUIRE(game->game_over() == false);//      | |X|
	game->mark_board(1);//O                     |X| |
	REQUIRE(game->game_over() == false);//     X| | | 
	game->mark_board(7);//X
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(10);//X	 
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//O
	REQUIRE(game->game_over() == false);
	game->mark_board(13);//X		
	REQUIRE(game->game_over() == true);
}