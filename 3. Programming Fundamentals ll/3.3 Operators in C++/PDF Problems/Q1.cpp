//Give the output of the following programs.

#include<iostream>
using namespace std;

int main() {

    int a = 5;
    a = 1, 2, 3;

    cout << "a = " << a;  // Ans. 1 (Priority for the values assigned to any variable is given from left to right)

    return 0;
}