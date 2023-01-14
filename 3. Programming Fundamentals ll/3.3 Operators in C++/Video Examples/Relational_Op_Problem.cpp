//We need to write a program which prints if a number is more than 10,\
equal to 10 or less than 10.

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    if (n > 10) {
        cout<<"Greater than 10\n";
    }
    else if (n < 10) {
        cout<<"Less than 10\n";
    }
    else {
        cout<<"Equal to 10\n";
    }

    return 0;
}