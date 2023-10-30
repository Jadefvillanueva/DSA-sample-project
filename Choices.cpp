#include<iostream>
#include "Operations.cpp"
using namespace std;

class Choices{
    public:

void loopingSwitch() {
    int userInput;
    Operation grr;

    while (true) {
        cout << endl;
        cout << "Operation Choices: " << endl;
        cout << "(1) ............Search Odd numbers" << endl;
        cout << "(2) ............Search Even numbers" << endl;
        cout << "(3) ............Swap Odd numbers and Even numbers" << endl;
        cout << "(4) ............Search Largest number" << endl;
        cout << "(5) ............Search Smallest number" << endl;
        cout << "(6) ............Swap Largest and Smallest number" << endl;
        cout << "(7) ............Delete nth Element" << endl;
        cout << "(8) ............Insertion of Elements" << endl;
        cout << "(9) ............Delete elements divisible by 3" << endl;
        cout << "(10) ...........Delete elements divisible by user input" << endl;
        cout << "(-1) ...........Exit" << endl;
        cout << endl;


        cout << "Enter a number from 1 to 10 (-1 to exit): ";
        cin >> userInput;
        cout << endl;
        system("clear");

        if (userInput == -1) {
            cout << "Exiting the program." << endl;
            break;  
        }

        switch (userInput) {
            case 1:
                grr.findOdd();
                break;
            case 2:
                grr.findEven();
                break;
            case 3:
                grr.swapOddEven();
                break;
            case 4:
                grr.bigNum();
                break;
            case 5:
                grr.smallNum();
                break;
            case 6:
                grr.swapBigSmall();
                break;
            case 7:
                grr.delNthElement();
                break;
            case 8:
                grr.insertElem();
                break;
            case 9:
                grr.delDiv3();
                break;
            case 10:
                grr.delInputUsr();
                break;

            default:
                cout << "Invalid input. Please enter a number from 1 to 10." << endl;
         }  
     }
    
 }

};