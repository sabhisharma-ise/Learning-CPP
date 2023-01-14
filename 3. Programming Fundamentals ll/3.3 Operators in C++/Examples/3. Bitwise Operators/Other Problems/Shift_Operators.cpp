//C++ Program to demonstrate use of shift operators in C++ 

#include<iostream>
using namespace std;

int main() {

    int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right: " << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i <= 3; ++i) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "Shift Left: " << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits 
    for (i = 0; i <= 3; ++i) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}