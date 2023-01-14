//Program to find maximum, minimum among two numbers

#include<iostream>

int main () {

    int n1,n2;
    std::cin>>n1>>n2;

    int max,min;

    if (n1 > n2) {
        max = n1;
        min = n2;
    }
    else {
        max = n2;
        min = n1;
    }

    std::cout<<"Max = "<<max<<std::endl;
    std::cout<<"Min = "<<min<<std::endl;

    return 0;
}