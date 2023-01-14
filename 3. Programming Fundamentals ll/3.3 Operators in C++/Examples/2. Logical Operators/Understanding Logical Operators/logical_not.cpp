//Understanding The Logical NOT Operator (!)

#include<iostream>
using namespace std;

int main() {

    cout<< "Enter a number: ";
    int x;
    cin>>x;

    if (!x == 0) {
        cout<< "You types a number other than 0\n";
    }
    else {
        cout<< "You typed 0\n";
    }

    return 0;

//This program is set up to return true any time the variable x is not zero.\
The if statement checks to see if x is equal to 0, which will return false for every number but zero.

}