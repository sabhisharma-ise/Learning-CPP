//Program to find sum of natural numbers till n

#include<iostream>

int main () {

    int n;
    std::cout<<"Enter a positive integer\n";
    std::cin>>n;

    int sum = 0;

    for (int counter = 1; counter <= n; ++counter) {
        sum = sum + counter;
    }

    std::cout<<"Sum of first "<<n<<" natural numbers is "<<sum;

    return 0;
}