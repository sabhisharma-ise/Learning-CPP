//Give the output of the following programs.

#include<iostream>
using namespace std;

int main() {

    int a = 1, b = 3, c;
    c = b << a;
    b = c * (b * (++a)--);
    a >>= b;  // simply means a = a >> b;

    cout << b;

    //Ans. 36\
    (c = 0011 << 1\
    c = 0110\
    b = 6* (3*(2)--)\
    b = 6*6\
    )

    return 0;
}