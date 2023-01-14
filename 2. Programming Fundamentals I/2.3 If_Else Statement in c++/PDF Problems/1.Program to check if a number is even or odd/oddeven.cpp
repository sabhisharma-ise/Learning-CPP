//Program to check if a number is even or odd

#include<iostream>

int main() {

    int n;
    std::cin>>n;

    if (n%2 == 0) {  // % is called the modulo operator. The modulo division operator produces the remainder of an integer division.
                                             
        std::cout<<"Even\n";
    }

    else {
    
        std::cout<<"Odd\n";
    }

    return 0;
}