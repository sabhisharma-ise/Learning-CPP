// C++ program to illustrate if-else-if ladder

#include<iostream>

int main(){

    int num;
    std::cout<<"Enter an integer between 1 and 99999\n";
    std::cin>>num;

    if (num < 10 && num >= 1) {
        std::cout<<"Its a one digit number\n";
    }
    else if (num < 100 && num >= 10) {
        std::cout<<"Its a two digit number\n";
    }
    else if (num < 1000 && num >= 100) {
        std::cout<<"Its a three digit number\n";
    }
    else if (num < 10000 && num >= 1000) {
        std::cout<<"Its a four digit number\n";
    }
    else if (num < 100000 && num >=10000 ) {
        std::cout<<"Its a five digit number\n";
    }
    else {
        std::cout<<"Number is not between 1 and 99999\n";
    }
    
    return 0;
}