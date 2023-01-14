//Program to find sum of natural numbers till n

#include<iostream>

int main () {

    int n;
    std::cout<<"Enter an integer\n";
    std::cin>>n;

    int sum = 0;

    for (int counter = 1; counter <= n; counter++) {
        sum = sum + counter;
    }

    std::cout<<"Sum of First "<<n<<" natural numbers is "<<sum<<std::endl; 

    return 0;
}