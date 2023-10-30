#include<iostream>
#include <cstdlib>
#include "Choices.cpp"

using namespace std;

bool chings(string user, string pass, string un[], string pw[]) {
    for (int i = 0; i < 8; i++) {
        if (user == un[i] && pass == pw[i]) {
            cout << "Welcome " << un[i] << "!" << endl;
            return true; 
        }
    }
    
    return false; 
}
 
int main() {
    
    string un[8] = {"jade", "darlene", "angels", "nicole", "mira", "dhel","kath", "gayle"};
    string pw[8] = {"pogi", "deleon", "borger", "nikol", "se", "monte", "balasta", "sambitan"};
    int c = 4;
    string user;
    string pass;
    Choices choices;


    while (c > 0) {
        cout << "Enter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;
        

        system("clear");
        if (chings(user, pass, un, pw)) { 
            choices.loopingSwitch();
            break;
        }


        else {
            cout << "Invalid! You have " << --c << " attempt(s)" << endl;
        }
    }


    return 0;
}
