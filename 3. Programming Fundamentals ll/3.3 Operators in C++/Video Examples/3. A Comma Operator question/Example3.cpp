// Program 3

#include<iostream>
using namespace std;

int main() {

    int a = (1, 2, 3);
    cout << a;

    //'()' operator has higher precedence than '='. So , firstly, bracket operator is evaluated.\
    '()' operator is operated from left to right. but it is always the result of last that gets assigned.

    return 0;
}