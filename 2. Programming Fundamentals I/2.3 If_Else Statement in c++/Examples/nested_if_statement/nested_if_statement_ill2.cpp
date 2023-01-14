// C++ program to illustrate nested-if statement

#include<iostream>

int main(){

    int num = 90;

    if (num < 100) {
        std::cout<<"number is less than 100\n";
        if (num > 50) {
            std::cout<<"number is greater than 50\n";
        }
    }   

    return 0;
}