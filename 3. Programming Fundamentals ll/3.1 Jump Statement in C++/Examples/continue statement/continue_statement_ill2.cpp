// C++ program to demonstrate the\
continue statement

#include<iostream>
using namespace std;

int main () {

    for (int i = 1; i <= 20; ++i) {
        if (i%3 == 0) {
            continue;
        }
        cout<<i<<endl;
    }


    return 0;
}