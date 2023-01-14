#include<iostream>

int main () {

    int n = 5;

    for (int row = 1; row < n; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout<< "* ";
        } std::cout << "\n";
    }
    for (int row = n; row <= (2*n - 1); row++) {
        for (int col = 1; col <= (2*n - 1) - row + 1; col++) {
            std::cout << "* ";
        } std::cout << "\n";
    } 

    return 0;
}