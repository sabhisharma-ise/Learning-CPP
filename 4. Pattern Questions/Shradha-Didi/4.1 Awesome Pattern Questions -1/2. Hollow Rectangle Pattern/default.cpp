// Hollow Rectangle Pattern with 5 Rows & 4 Columns

#include<iostream>

int main() {

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 4; j++) {

            if (i == 1 || i == 5  || j == 1 || j == 4) {

                std::cout << "* ";
                

            } else {

                std::cout << "  ";

            }
        }
        
        std::cout << "\n";
    }

    return 0;
}