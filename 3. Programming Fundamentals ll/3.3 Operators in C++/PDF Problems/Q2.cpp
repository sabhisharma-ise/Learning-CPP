//Give the output of the following programs.

#include<iostream>
using namespace std;

int main() {

    int a;
    a = (1, 2, 3);

    cout << "a = " << a;  // Ans. 3 (Priority for the values inside a brackets () assigned to any variable isgiven from right to left.)

    return 0;
}