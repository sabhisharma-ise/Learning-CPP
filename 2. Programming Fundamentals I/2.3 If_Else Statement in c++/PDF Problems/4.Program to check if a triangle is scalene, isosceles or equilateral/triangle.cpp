//Program to check if a triangle is scalene, isosceles or equilateral

#include<iostream>

int main () {

    int side1,side2,side3;
    std::cout<<"Input three sides of a triangle\n";
    std::cin>>side1>>side2>>side3;

    if (side1 == side2 && side2 == side3) {
        std::cout<<"Equilateral Triangle\n";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1) {
        std::cout<<"Isosceles Triangle\n";
    }
    else {
        std::cout<<"Scalene Triangle\n";
    }

    return 0;
}