// Program 2

#include<iostream>
using namespace std;

int main() {

    int a;
    a = 1, 2, 3;
    cout << a;

    //'=' operator has higher precedence than ',' operator.\
    so 'i' gets initialized by '1'. '2' and '3' are just constant expression. so have no effect .

    return 0;
}

// Precedence of comma operator is least in operator precedence table.\
So the assignment operator takes precedence over comma and the expression “a = 1, 2, 3” becomes\
equivalent to “(a = 1), 2, 3”. That is why we get output as 1 in the second program.