// C++ program to illustrate if-else statement

#include<iostream>

int main(){

    int age;
    std::cin>>age;

    if (age >= 18) {
        std::cout<<"You can vote!\n";
    }
    else {
        std::cout<<"Not eligible for voting\n";
    }

    return 0;
}