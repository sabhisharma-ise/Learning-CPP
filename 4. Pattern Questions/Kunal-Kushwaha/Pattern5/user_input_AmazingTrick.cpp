#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int m = (2*n)-1;

    for (int row = 1; row < n; row++) {
        for (int col = 1; col <= row; col++){
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}
