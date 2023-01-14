//In case of logical OR, the second operand is not evaluated if first operand is true.

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 4;

    bool c = ((a != b) || cout<<"GeeksQuiz");

    return 0;  // No Output

    //It doesn’t print “GeeksQuiz”\
    as the first operand of logical OR itself is true. 

}