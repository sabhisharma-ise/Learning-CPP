//Understanding The Logical OR Operator (||)

#include<iostream>
using namespace std;

int main() {

    cout<< "Enter a number: ";
    int x;
    cin>>x;

    if (x == 4 || x == 8) {
        cout<< "Congratulations, You chose a winning number!\n";
    }
    else {
        cout<< "Sorry, better luck next time.\n";
    }

    return 0; 

//Consider a scenario where picking one of two lucky numbers\
between 1 and 10 in a game will win us a prize.\
For this example, we’ll set the lucky numbers to four and eight.

}