//Write a program to output whether a number is divisible\
by both 2 and 3 or divisible by only one of them.

#include<iostream>
using namespace std;

int main() {

    cout << "Enter a number: ";
    int n;
    cin>>n;

    if (n%2 == 0 && n%3 == 0) {
        cout << "Divisible by both 2 and 3\n";
    }
    else if (n%2 == 0) {
        cout << "Divisible by only 2\n";
    }
    else if (n%3 == 0) {
        cout << "Divisible by only 3\n";
    }
    else {
        cout << "Divisible by none\n";
    }

    return 0;
}