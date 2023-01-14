// C++ program to illustrate if-else-if ladder

#include<iostream>

int main(){

    int i = 20;     //Assignment Operator(=), it assigns the value of right operand to the left operand

    if (i == 10) {  //Equal To Operator(==), it compares the value of left expression with right expression
        std::cout<<"i is 10\n";
    }
    else if (i == 15) {
        std::cout<<"i is 15\n";
    }
    else if (i == 20) {
        std::cout<<"is is 20\n";
    }
    else {
        std::cout<<"i is not present\n";
    }

    return 0;
}