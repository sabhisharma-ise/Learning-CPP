#include<iostream>

int main(){

    int a,b,c;
    std::cin>>a>>b>>c;

    if (a > b) {
        if (a > c) {
            std::cout<<a<<std::endl;
        }
        else {
            std::cout<<c<<std::endl;
        }
    }
    else {
        if (b > c) {
            std::cout<<b<<std::endl;
        }
        else {
            std::cout<<c<<std::endl;
        }
    }

    return 0;
}