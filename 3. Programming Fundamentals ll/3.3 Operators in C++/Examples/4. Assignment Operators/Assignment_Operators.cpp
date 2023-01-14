//Assignment Operators

#include<iostream>
using namespace std;

int main () {

    int a = 2, b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Assigning the sum of a and b to a
    cout << "After a += b;" << endl;
    a += b;
    cout << "a = " << a << endl;

    return 0;
}