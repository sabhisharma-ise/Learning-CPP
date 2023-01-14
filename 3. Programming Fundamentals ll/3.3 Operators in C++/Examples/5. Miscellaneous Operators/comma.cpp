// The Comma operator (,) causes a sequence of operations to be performed.

#include<iostream>
using namespace std;

//this code will not run as these are just examples, you have to use them individually to properly run each one of them. 
int main() {

    int a=1, b=2, c=3, i=0;
    //Commas act as separators in this line, not as an operator.\
    Results: a=1, b=2, c=3, i=0

    int a=1, b=2, c=3;              
    int i = (a, b); 
    //Assigns value of b into i.\
    Commas act as separators in the first line and as an operator in the second line.\
    Results: a=1, b=2, c=3, i=2

    int a=1, b=2, c=3;                                
    { int i = a, b; }
    //Assigns value of a into i.\
    Equivalent to: int i = a; int b;\
    Commas act as separators in both lines.\
    The braces on the second line avoid variable redeclaration in the same block,\
    which would cause a compilation error.\
    The second b declared is given no initial value.\
    Results: a=1, b=2, c=3, i=1

    int a=1, b=2, c=3;
    int i = (a += 2, a + b);
    //Increases value of a by 2, then assigns value of resulting operation a + b into i.\
    Commas act as separators in the first line and as an operator in the second line.\
    Results: a=3, b=2, c=3, i=5

    int a=1, b=2, c=3;
    int i;
    i = a += 2, a + b;
    //Increases value of a by 2, then stores value of a to i, and discards unused\
    values of resulting operation a + b.\
    Equivalent to: (i = (a += 2)), a + b;\
    Commas act as separators in the first line and as an operator in the third line.\
    Results: a=3, b=2, c=3, i=3

    int a=1, b=2, c=3;
    { int i = a, b, c; }
    //Assigns value of a into i.\
    Commas act as separators in both lines.\
    The braces on the second line avoid variable redeclaration in the same block,\
    which would cause a compilation error.\
    The second b and c declared are given no initial value.\
    Results: a=1, b=2, c=3, i=1

    int a=1, b=2, c=3;
    int i = (a, b, c);
    //Commas act as separators in the first line and as an operator in the second line.\
    Assigns value of c into i, discarding the unused a and b values.\
    Results: a=1, b=2, c=3, i=3

    return a=4, b=5, c=6;
    //Returns 6, not 4, since comma operator sequence points following the keyword\
    return are considered a single expression evaluating to rvalue of final\
    subexpression c=6.\
    Commas act as operators in this line.

    return 1, 2, 3;
    //Returns 3, not 1, for same reason as previous example.\
    Commas act as operators in this line.

    return(1), 2, 3;
    //Returns 3, not 1, still for same reason as above. This example works as it does\
    because return is a keyword, not a function call. Even though compilers will\
    allow for the construct return(value), the parentheses are only relative to "value"\
    and have no special effect on the return keyword.\
    Return simply gets an expression and here the expression is "(1), 2, 3".

    return 0;
}