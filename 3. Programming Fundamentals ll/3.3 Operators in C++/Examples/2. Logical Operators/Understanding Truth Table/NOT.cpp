// C++ program demonstrating ! operator truth table

#include<iostream>
using namespace std;

int main() {

    int a = 5;

    // !false = true
    cout << !(a == 0) << endl;

    // !true = false
    cout << !(a == 5) << endl;

    return 0;
}