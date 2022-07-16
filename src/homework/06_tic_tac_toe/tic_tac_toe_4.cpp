#include "tic_tac_toe_4.h"
 

bool TicTacToe4::check_column_win() 
{   // Checking for column win in marked values 1,5,9,13 or 2,6,10,14 or 3,7,11,15 or 4,8,12,16 with all Xs or Os
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X") || 
    (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X") ||
    (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X") ||
    (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X") ||
    (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O") || 
    (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O") ||
    (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O") ||
    (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe4::check_row_win()
{   // Checks for row win in marked values 1,2,3,4 or 5,6,7,8 or 9,10,11,12 or 13,14,15,16 with X's or O's
    if((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X") || 
    (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X") ||
    (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X") ||
    (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X") ||
    (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O") || 
    (pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "O") ||
    (pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O") ||
    (pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O"))
        {
            return true;
        }
    else
    {
        return false;
    }

}

bool TicTacToe4::check_diagonal_win()
{   // checks for diagonal win in marked values 1,6,11,16 or 4,7,10,13 with all Xs or Os
    if((pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X") ||
    (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X") ||
    (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O") ||
    (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O"))
        {
            return true;
        }
    else
    {
        return false;
    }
}

void TicTacToe4::display_board()
{
    for(long unsigned i=0; i < pegs.size(); i+= 4)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
    }
}