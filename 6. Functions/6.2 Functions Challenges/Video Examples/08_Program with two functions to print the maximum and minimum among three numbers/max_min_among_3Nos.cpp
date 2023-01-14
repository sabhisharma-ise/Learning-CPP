//Program with two functions to print the maximum and minimum among three numbers

#include<iostream>

void max (int a, int b, int c) {

    if (a > b) {

        if (a > c) {

            std::cout << "Maximum is " << a;
        }

        else {

            std::cout << "Maximum is " << c;
        }
    }

    else {

        if (b > c) {

            std::cout << "Maximum is " << b;

        }

        else {

            std::cout << "Maximum is " << c;
        }
    }
}

void min (int a, int b, int c) {

    if (a < b) {

        if (a < c) {

            std::cout << "Minimum is " << a;
        }

        else {

            std::cout << "Minimum is " << c;
        }
    }

    else {

        if (b < c) {

            std::cout << "Minimum is " << b;
        }

        else {

            std::cout << "Minimum is " << c;
        }
    }
}

int main () {

    int a, b, c;

    std::cout << "Enter the three numbers: ";
    std::cin >> a >> b >> c;

    max (a, b, c);

    std::cout << "\n";
    
    min (a, b, c);

    return 0;
}