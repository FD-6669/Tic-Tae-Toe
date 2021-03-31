#include <iostream>
using namespace std;

char squarenum[10]={'0','1','2','3','4','5','6','7','8','9'};

//Create Functions
//Check Whether The Winning Requirement fullfilled by either player.
//Build Platform Board For Game
int StatusWin();
void board();
void Repetition();

//Main Program to Support Game between Player 1 and Player 2
int main()
{
    int player=1,i,ChoiceNum;
    
    char markpoint;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", Please Enter a Number (1-9): "; cin >> ChoiceNum;

        markpoint=(player == 1)?'X':'O';

        if (ChoiceNum == 1 && squarenum[1]== '1')
        {
            squarenum[1]=markpoint;
        }
        else if (ChoiceNum == 2 && squarenum[2] == '2')
        {
            squarenum[2]=markpoint;
        }
        else if (ChoiceNum == 3 && squarenum[3] == '3')
        {
            squarenum[3]=markpoint;
        }
        else if (ChoiceNum == 4 && squarenum[4] == '4')
        {
            squarenum[4]=markpoint;
        }
        else if (ChoiceNum == 5 && squarenum[5] == '5')
        {
            squarenum[5]=markpoint;
        }
        else if (ChoiceNum == 6 && squarenum[6] == '6')
        {
            squarenum[6]=markpoint;
        }
        else if (ChoiceNum == 7 && squarenum[7] == '7')
        {
            squarenum[7]=markpoint;
        }
        else if (ChoiceNum == 8 && squarenum[8] == '8')
        {
            squarenum[8]=markpoint;
        }
         else if (ChoiceNum == 9 && squarenum[9] == '9')
        {
            squarenum[9]=markpoint;
        }
        else 
        {
            cout << "Invalid Number for Move";

            player--;
            cin.ignore();
            cin.get();
        } 
        
        i=StatusWin();

        player++;
    }while(i==-1);
    squarenum[1]='1';squarenum[2]='2';squarenum[3]='3';squarenum[4]='4';squarenum[5]='5';squarenum[6]='6';squarenum[7]='7';squarenum[8]='8';squarenum[9]='9';
    if(i==1)
    {
        cout << "\nCongratulation !!!!!! =>> Winner is \aPlayer " << --player << "\n" << endl;
        Repetition();
    }
    else 
    {
        cout << "\a\n\t\t\tGame Draw!\n" <<endl;
        Repetition();
    }
    
    cin.ignore();
    cin.get();
    return 0; 
}


//Check Whether Fullfill Winning Requirement or Not
int StatusWin()
{
    if (squarenum[1] == squarenum[2] && squarenum[2] == squarenum[3])
    {
        return 1;
    }
    else if (squarenum[4] == squarenum[5] && squarenum[5] == squarenum[6])
    {
        return 1;
    }
    else if (squarenum[7] == squarenum[8] && squarenum[8] == squarenum[9])
    {
        return 1;
    }
    else if (squarenum[1] == squarenum[4] && squarenum[4] == squarenum[7])
    {
        return 1;
    }
    else if (squarenum[2] == squarenum[5] && squarenum[5] == squarenum[8])
    {
        return 1;
    }
    else if (squarenum[3] == squarenum[6] && squarenum[6] == squarenum[9])
    {
        return 1;
    }
    else if (squarenum[1] == squarenum[5] && squarenum[5] == squarenum[9])
    {
        return 1;
    }
    else if (squarenum[7] == squarenum[5] && squarenum[5] == squarenum[3])
    {
        return 1;
    }
    else if (squarenum[1] != '1' && squarenum[2] != '2' && squarenum[3] != '3' 
                    && squarenum[4] != '4' && squarenum[5] != '5' && squarenum[6] != '6' 
                  && squarenum[7] != '7' && squarenum[8] != '8' && squarenum[9] != '9')
    {
        return 0;
    }
    else 
    {
        return -1;
    }

}

//Platform to show How game goes
void board()
{
    system("cls");
    cout << "Hi! Welcome to Tic Tac Toe!\n";

    cout << "Player 1 = [X]\nPlayer 2 = [O]" <<endl;
    cout << "\n\n";

    cout << "     |     |     " << endl;
    cout << "  " << squarenum[1] << "  |  " << squarenum[2] << "  |  " << squarenum[3] << endl;

    cout << " ____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << squarenum[4] << "  |  " << squarenum[5] << "  |  " << squarenum[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << squarenum[7] << "  |  " << squarenum[8] << "  |  " << squarenum[9] << endl;

    cout << "     |     |     " << endl << endl;
}

void Repetition()
{
    char Repeat;
    cout << "Thank You Very Much <3"<<endl;
        cout << "Do you want to play again? (y/n):"; cin >> Repeat;
        if(Repeat == 'y')
        {
            system("cls");
            main();
        } else 
        {
            cout << "\nSee Ya!\n\n";
            system("PAUSE");
        }
}