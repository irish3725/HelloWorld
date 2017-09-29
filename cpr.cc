
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int wrong = 1;
    string cpr;
    while(wrong){
        cout << "How do you spell CPR?\n> ";
        cin >> cpr;
        if (!cpr.compare("CPR")){ 
            cout << "Oh silly me. You're right its " << cpr << "\n";
            wrong = 0; 
        }
        if (cpr.compare("cpr") == 0)
            cout << "I think you're supposed to capitalize it.\n";
        if (cpr.compare("CPR") != 0 && cpr.compare("cpr") != 0)
        cout << "I don't think that's it.\n";
    }
    return 0;
}

