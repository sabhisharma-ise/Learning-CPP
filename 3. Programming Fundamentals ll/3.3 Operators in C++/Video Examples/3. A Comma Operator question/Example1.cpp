// Program 1

#include<iostream>
using namespace std;

int main() {

    int a = 1, 2, 3;
    cout << a;

    //The above program fails in compilation\
    the compiler is expecting you to declare multiple identifiers;
    return 0;
}

//'=' operator has higher precedence than ',' operator.\
comma act as a separator here. the compiler creates an integer variable 'i' and initializes it with '1'.\
The compiler fails to create integer variable '2' as '2' is not a valid indentifer.

