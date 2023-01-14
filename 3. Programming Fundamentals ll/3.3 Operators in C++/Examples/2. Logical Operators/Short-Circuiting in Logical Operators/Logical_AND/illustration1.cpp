//In case of logical AND, the second operand is not evaluated if first operand is false.

#include<iostream>
using namespace std;

int main() {

    int a = 10, b = 4;

    bool c = ((a == b) && cout<<"GeeksQuiz");  

    return 0;  // No Output

    //It doesn’t print “GeeksQuiz”\
    as the first operand of logical AND itself is false.
}