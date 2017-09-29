
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

//returns value between 1 and 6
int rollDice(){    
    return (rand() % 6 + 1); 
}

int playDice(){
    int pRoll = rollDice();
    int oRoll = rollDice();
    cout << "\nYou rolled a " << pRoll << ".\n";
    cout << "Your opponent rolled a " << oRoll << ".\n";
    if (pRoll > oRoll){
        cout << "You Won!\n\n";
    } else if (pRoll < oRoll) {
        cout << "You Lost.\n\n";
    } else {
        cout << "You Tied!\n\n";
    }
}

void menu() {
    string option;
    bool go = true;
    while(go) {
        cout << "Play dice? (y/n)\n> ";
        cin >> option;
        if (!option.compare("y") || !option.compare("Y")
                || !option.compare("yes")) {
            playDice(); 
        } else { 
            go = false;
        }
    }
}

int main() { 
    menu();
    return 0;
}

