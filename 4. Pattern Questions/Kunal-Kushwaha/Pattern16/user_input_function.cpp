/* Pattern 16 (Pascal Triangle)

              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

*/

#include<iostream>

int fact (int n) {

    int fact = 1;

    if (n == 0) {

        return fact;
    }

    else if (n < 0) {

        std::cout << "Invalid Input";
    }

    else {

        for (int i = 2; i <= n; i++) {

        fact *= i;

        }

        return fact;
    }

    return 0;
}

int nCr (int n, int r) {

    int nCr = fact (n) / (fact (n - r) * fact (r));

    return nCr;

}

int main () {

    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 0; row < n; row++) {

        int totalSpacesInRow = (n - row);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";

        }

        for (int col = 0; col <= row; col++) {      //Have to write col <= row for getting correct output

            std::cout << nCr (row, col) << "   ";

        } std::cout << "\n";
    } 

    return 0;
}