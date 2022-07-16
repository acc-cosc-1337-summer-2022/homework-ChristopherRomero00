#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>
#include<memory>

using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{

	string first_player;
	int board_choice;
	char user_choice = 'y';

	do
	{
		
		cout<<"1 - 3x3 board\n";
		cout<<"2 - 4x4 board\n";
		cout<<"Enter the size of the board you want to play: ";
		cin>>board_choice;
		while(board_choice != 1 && board_choice != 2)
		{
			cout<<"\nInvalid choice! Enter 1 (3x3 board) or 2 (4x4 board): ";
			cin>>board_choice;
		}

		if(board_choice == 1)
		{
			unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
			cout<<"Enter first player X or O: ";
			cin>>first_player;
			while(first_player != "X" && first_player != "O")
			{
				cout<<"\nInvalid Entry! Enter first player X or O: ";
				cin>>first_player;
			}

			game->start_game(first_player);
			int position;

			while(!game->game_over())
			{
				cout<<"Enter a position: ";
				cin>>position;
				while(position < 1 || position > 9)
				{
					cout<<"Invalid Position! Choose a position between 0-9: ";
					cin>>position; 
				}
				game->mark_board(position);
				game->display_board();
			}
			if(game->get_winner() == "X" || game->get_winner() == "O")
				{
					cout<<game->get_winner() <<" WINS!!! "<<"\n" ;
				}
			else
			{
				cout<<"Draw! No Winner!\n";
			}
		}

		else if(board_choice == 2)
		{
			unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
			cout<<"Enter first player X or O: ";
			cin>>first_player;
			while(first_player != "X" && first_player != "O")
			{
				cout<<"\nInvalid Entry! Enter first player X or O: ";
				cin>>first_player;
			}

			game->start_game(first_player);

			int position;

			while(!game->game_over())
			{
				cout<<"Enter a position: ";
				cin>>position;
				while(position < 1 || position > 16)
				{
					cout<<"Invalid Position! Choose a position between 1-16: ";
					cin>>position; 
				}
				game->mark_board(position);
				game->display_board();
			}

			if( game->get_winner() == "X" || game->get_winner() == "O")
				{
					cout<<game->get_winner() <<" WINS!!! "<<"\n" ;
				}
			else
			{
				cout<<"Draw! No Winner!\n";
			}
		}		
		
		cout<<"Play again? Enter Y or N: ";
		cin>>user_choice;
		while(user_choice != 'Y' && user_choice != 'y' && user_choice != 'N' && user_choice != 'n')
        {
            cout<<"Invalid choice! Type 'Y' to play again or 'N' to end program: ";
            cin>>user_choice;
        }
		
	} while (user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}