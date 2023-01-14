// To Find the Time Complexity of the program

#include<iostream>

int main () {

    // Main program starts
    int n;
    std::cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j += i) {
            a = a + 1;
        }
    }

    return 0;
}

/* Formulae Used

N + N/2 + N/3 + N/4 + ...... + 1 = N (1 + 1/2 + 1/3 + 1/4 + ...... + 1/N) <= NLogN

*/

/*

When i = 1: j = 1, 2, 3, ..... (Value of each 'j' increments by i (= 1))    i.e. 'n' times
When i = 2: j = 1, 3, 5, ..... (Value of each 'j' increments by i (= 2))    i.e. 'n/2' times
When i = 3: j = 1, 4, 7, ..... (Value of each 'j' increments by i (= 3))    i.e. 'n/3' times
.
.
When i = n: j = 1   i.e. 1 times

Total no. of times a = a + 1 will run
= n + n/2 + n/3 + n/4 + ....... + 1
= n [1 + 1/2 + 1/3 + 1/4 + ....... + 1/n]
<= n [log n]

Time Complexity is O(nlogn)

*/