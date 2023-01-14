//The Ternary Operator (Condition?X:Y) return the value of X if the condition is true\
otherwise it returns the value of Y.

#include<iostream>
using namespace std;

int main() {

    int x, y = 10;

    x = (y < 10) ? 30 : 40;
    cout << "Value of x: " << x << endl;

    return 0;
}