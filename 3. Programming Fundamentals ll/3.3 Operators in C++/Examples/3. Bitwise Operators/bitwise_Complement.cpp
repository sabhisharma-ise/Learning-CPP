//Performing Bitwise Complement Operation on variables a and b.

#include<iostream>
using namespace std;

int main() {

    int a = 35; //00001100 (In Binary)
    int b = -150; //00011001 (In Binary)

    cout << "~(" << a << ") = " << (~a) << endl;
    cout << "~(" << b << ") = " << (~b) << endl;

    return 0;
}