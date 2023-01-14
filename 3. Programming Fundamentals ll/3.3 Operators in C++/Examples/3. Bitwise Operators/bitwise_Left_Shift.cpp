//C++ Program to demonstrate use of left shift operator (<<)

#include<iostream>
using namespace std;

int main() {

    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    // The result is 00001010 
    cout << "a << 1 = " << (a << 1) << endl;

    // The result is 00010010 
    cout << "b << 1 = " << (b << 1) << endl;

    return 0;
}