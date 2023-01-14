#include<iostream>

int main() {

    int n = 5;
    
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            if (col == 1) {
                std::cout <<"1 ";
            } else if (col == 2) {
                std::cout <<"2 ";
            } else if (col == 3) {
                std::cout <<"3 ";
            } else if (col == 4) {
                std::cout <<"4 ";
            } else {
                std::cout <<"5 ";
            }
        } std::cout << "\n";
    } 
    
    return 0;
}