// The address of operator (also known as the referencing operator) returns the address of the variable.

#include<iostream>
using namespace std;

int main() {

    int a = 1;

    cout<<"a = " << a << endl;
    cout << "The address of the variable a is: " ;
    cout << &a << endl;

    return 0;
}