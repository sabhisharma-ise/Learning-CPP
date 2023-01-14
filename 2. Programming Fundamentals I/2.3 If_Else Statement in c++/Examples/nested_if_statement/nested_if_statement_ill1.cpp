// C++ program to illustrate nested-if statement

#include<iostream>

int main(){

    int i = 10;

    if (i == 10){
        if (i < 15) {
            std::cout<<"i is smaller than 15\n";
            if (i < 12) {
                std::cout<<"i is smaller than 12 too\n";
            }
        }   else {
            std::cout<<"i is greater than 15\n";
        }
    }

    return 0;
}