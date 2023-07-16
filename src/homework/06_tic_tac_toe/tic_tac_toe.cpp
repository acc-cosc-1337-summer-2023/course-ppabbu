//cpp

#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;
bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    
    return false;
}
void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i = 0; i < pegs.size(); i += 3)
    for(long unsigned int i = 0; i < pegs.size(); i += std::sqrt(pegs.size()))
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2];

        if(pegs.size() == 16) {cout<<"|"<<pegs[i+3];}

        cout<<"\n";
    }
}

@@ -80,41 +84,16 @@ bool TicTacToe::check_board_full() const

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if ((pegs[i] == pegs[i+3]) && (pegs[i+3] == pegs[i+6]) && (pegs[i] != " "))
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i+=3)
    {
        if ((pegs[i] == pegs[i+1]) && (pegs[i+1] == pegs[i+2]) && (pegs[i] != " "))
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]) && (pegs[0] != " "))
    {
        return true;
    }
    else if ((pegs[6] == pegs[4]) && (pegs[4] == pegs[2]) && (pegs[6] != " "))
    {
        return true;
    }

{ 
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}