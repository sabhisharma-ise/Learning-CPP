// To Find the Time Complexity of the program

#include<iostream>

int main () {

    // Main program starts
    int n;
    std::cin >> n;
    int a = 0;
    for (int i = n; i >= 1; i /= 2) {
        for (int j = 1; j <= i; j++) {
            a = a + 1;
        }
    }

    return 0;
}

/* Formulae Used

N + N/2 + N/4 + N/8 + ...... + 1 = 2N - 1

*/

/*

When i = n: j = 1, 2, 3, ..., n      i.e. 'n' times
When i = n/2: j = 1, 2, 3, ..., n/2  i.e. 'n/2' times
When i = n/4: j = 1, 2, 3, ..., n/4  i.e. 'n/4' times
.
.
When i = 1: j = 1                    i.e. 1 times

Total no. of times a = a + 1 statement will run
= n + n/2 + n/4 + ..... + 1
= 2 x n - 1

Time Complexity = O(2n - 1) = O(n) "Linear"

*/