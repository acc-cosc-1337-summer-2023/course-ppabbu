#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game;
    string first_player;
    char user_choice = 'y';

    do
    {
        cout<<"Enter first player: ";
        cin>>first_player;

        if((first_player != "X") && (first_player != "O"))
        {
            do
            {
                cout<<"Please enter first player X or O: ";
                cin>>first_player;
            }while((first_player != "X") && (first_player != "O"));
        }

        game.start_game(first_player);

        int position;

        while(!game.game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game.mark_board(position);
            game.display_board();
        }

        if (game.get_winner() == "C")
        {
            cout<<"It's a tie!"<<"\n";
        }
        else
        {
            cout<<"The Winner is: "<<game.get_winner()<<"\n";
        }

        cout<<"Play again? enter y or Y?";
        cin>>user_choice;

    }while(user_choice == 'y' || user_choice == 'Y');

    return 0;
}