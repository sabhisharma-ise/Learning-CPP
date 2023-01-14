//Check if a person is eligible for voting or not by comparing his age with legal voting age i.e. 18

#include<iostream>

void Eligiblity (int age) {

    if (age >= 18) {

        std::cout << "Eligible to Vote!";
    }

    else {

        std::cout << "Not Eligible, Better Luck Next Time!";
    }

}

int main () {

    int age;

    std::cout << "Enter the age: ";
    std::cin >> age;

    Eligiblity (age);

    return 0;
}