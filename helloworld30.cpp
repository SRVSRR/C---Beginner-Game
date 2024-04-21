// Rock Paper Scissors Game

#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout <<"Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Com choise: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    cout <<"Rock,Paper,Scissors\n";
    do{
        cout << "r for rock\n";
        cout << "s for scissors\n";
        cout << "p for paper\n";
        cin >> player;
    }while(player != 'r' && player != 's' && player != 'p');

    return player;
    
}

char getComputerChoice(){
    srand(time(0));
    int num = rand()% 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': cout << "Rock\n";
                break;
        case 's': cout <<"Scissors\n";
                break;
        case 'p': cout <<"Paper\n";
                break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
                    cout << "Tie\n";
                }
                else if(computer == 'p'){
                    cout <<"Loss\n";
                }else{
                    cout << "Win\n";
                }
                break;

        case 'p': if(computer == 'r'){
                    cout << "Win\n";
                }
                else if(computer == 'p'){
                    cout <<"Tie\n";
                }else{
                    cout << "Loss\n";
                }
                break;
        case 's': if(computer == 'r'){
                    cout << "Loss\n";
                }
                else if(computer == 'p'){
                    cout <<"Win\n";
                }else{
                    cout << "Tie\n";
                }
                break;
    }
}