// Solid Rectangle Pattern with 'n' Rows & 'm' Columns (Taking Input from the User)

#include<iostream>

int main() {

    int rows, cols;

    std::cout<<"Enter no of rows: \n";
    std::cin>>rows;

    std::cout<<"Enter no of columns: \n";
    std::cin>>cols;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= cols; j++) {

            std::cout << "* ";
        }

        std::cout<<'\n';
    }

    return 0;
}