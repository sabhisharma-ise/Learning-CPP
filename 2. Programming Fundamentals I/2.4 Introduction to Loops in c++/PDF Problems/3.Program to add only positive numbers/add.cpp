//Program to add only positive numbers

#include<iostream>

int main () {

    int n;
    int sum = 0;
    std::cout<<"Enter a number\n";

    std::cin>>n;

    while (n >= 0) {
        sum = sum + n;

        std::cout<<"Enter a number\n";
        std::cin>>n;
    }
    
    std::cout<<"The sum is "<<sum;

    return 0;
}