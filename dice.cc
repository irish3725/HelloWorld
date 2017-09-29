
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

void rollDice(){    
    cout << (rand() % 6 + 1) << "\n"; 
}

int main() {

    string option;
    bool go = true;
    while(go) {
        cout << "roll dice? (y/n)\n> ";
        cin >> option;
        if (!option.compare("y") || !option.compare("Y")
                || !option.compare("yes")) {
            rollDice();
        } else { 
            go = false;
        }
    }

    return 0;
}

