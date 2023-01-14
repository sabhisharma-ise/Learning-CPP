//Performing Bitwise XOR Operation between variables a and b

#include<iostream>
using namespace std;

int main() {

    int a = 12; //00001100 (In Binary)
    int b = 25; //00011001 (In Binary)

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    // The result is 00010101

    return 0;
}