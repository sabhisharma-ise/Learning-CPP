//Give the output of the following programs.

#include<iostream>
using namespace std;

int main() {

    cout << (3 * 2--) << endl;

    //Ans. 6\
    (2-- stands meaningless)

    return 0;
}

// This code will give lvalue compilation error as\
increment and decrement operator (++ and - - ) will work only on a variable and not on a constants\
ie; a++ or a-- is correct, but 2-- or 2++ is error.

//The argument of a increment/decrement operator must be a lvalue -- essentially,\
it has to be an expression that you could assign a value to.\
Constants aren't lvalues. You can't assign a value to them (3 = abc),\
nor can you mutate their values with the increment or decrement operators.
