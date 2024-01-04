#include<iostream>

using namespace std;

char square[10]={'0','1','2','3','4','5','6','7','8','9'};

//function to check win or lost

int winch(){
    if(square[1] == square[2]  && square[2] == square[3]){
        return 1;
    }
    else if(square[4] == square[5]  &&  square[5] == square[6]){
        return 1;
    }
    else if(square[7] == square[8]  &&  square[8] == square[9]){
        return 1;
    }
    else if(square[1] == square[4]  &&  square[4] == square[7]){
        return 1;
    }
    else if(square[2] == square[5]  &&  square[5] == square[8]){
        return 1;
    }
    else if(square[3] == square[6]  &&  square[6] == square[9]){
        return 1;
    }
    else if(square[1] == square[5]  &&  square[5] == square[9]){
        return 1;
    }
    else if(square[3] == square[5]  &&  square[5] == square[7]){
        return 1;
    }
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}

//drawing interface of board to put signs to play game

void board(){
    system("cls");
    cout<<"\n\n\t You are in Tic Tac Game \n \n ";                  // displaying the name of the game
    cout<<"sign of player1:- (X) & sign of player2:- (O) \n"<< endl;

//interface of board

cout<<"        ""   |   |   "<< endl;
cout<<"        "" " << square[1] << " | " << square[2] << " | " << square[3] << endl;
cout<<"        ""___|___|___"<<endl;
cout<<"        ""   |   |   "<<endl;
cout<<"        "" " << square[4] << " | " << square[5] << " | " << square[6] << endl;
cout<<"        ""___|___|___"<<endl;
cout<<"        ""   |   |   "<<endl;
cout<<"        "" " << square[7] << " | " << square[8] << " | " << square[9] << endl;
cout<<"        ""   |   |   "<< endl<< endl;

}

int main(){

    int player = 1,i,choice;

    char sign;

    do
    {
       board();
       player=(player%2)?1:2;
       cout<< "Player " << player << " enter the number:";
       cin>>choice;
       sign = (player == 1) ? 'X': 'O';


       if(choice == 1 && square[1] == '1'){
        square[1] = sign;
       }
       else if (choice == 2 && square[2] == '2'){
            square[2] = sign;
       }
       else if (choice == 3 && square[3] == '3'){
            square[3] = sign;
       }
       else if (choice == 4 && square[4] == '4'){
            square[4] = sign;
       }else if (choice == 5 && square[5] == '5'){
            square[5] = sign;
       }else if (choice == 6 && square[6] == '6'){
            square[6] = sign;
       }else if (choice == 7 && square[7] == '7'){
            square[7] = sign;
       }else if (choice == 8 && square[8] == '8'){
            square[8] = sign;
       }else if (choice == 9 && square[9] == '9'){
            square[9] = sign;
       }
       else{
        cout<< " *WRONG MOVE* ";
        player--;
        cin.ignore();
        cin.get();

       }
       i=winch();
       player++;

    } while (i == -1);

    board();

    if(i == 1){
        cout<< "\a CONGRATS! PLAYER " << --player << " WINS!";
    }
    else{
        cout<<"\a DRAW! ";
    }
    cin.ignore();
    cin.get();

    return 0;
    



}