// C++ program to illustrate if-else-if ladder

#include<iostream>

int main(){

    int x,y;
    std::cin>>x>>y;

    if (x == y) {
        std::cout<<"Both the numbers are equal\n";
    }
    else if (x > y) {
        std::cout<<"X is greater than Y\n";
    }
    else {
        std::cout<<"Y is greater than X\n";
    }

    return 0;
}