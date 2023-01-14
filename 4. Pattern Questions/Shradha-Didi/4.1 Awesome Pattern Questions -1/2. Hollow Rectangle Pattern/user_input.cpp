// Hollow Rectangle Pattern with 'n' Rows & 'm' Columns (Taking Input from the User)

#include<iostream>

int main() {

    int n, m;  //Rows = n, Columns = m

    std::cout << "Enter no of rows: \n";
    std::cin >> n;

    std::cout << "Enter no of columns: \n";
    std::cin >> m;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= m; j++) {

            if (i == 1 || i == n || j == 1 || j == m) {

                std::cout << "* ";

            } else {

                std::cout << "  ";
            
            }
        }

        std::cout << '\n';
    }

    return 0;
}
