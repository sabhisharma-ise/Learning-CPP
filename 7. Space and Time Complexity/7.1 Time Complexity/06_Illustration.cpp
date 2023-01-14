// To Find the Time Complexity of the program

#include<iostream>

int main () {

    // Main program starts
    int n;
    std::cin >> n;
    int a = 0, i = n;
    while (i >= 1) {
        a = a + 1;
        i = i / 2;
    }

    return 0;
}

/*

The value of 'i' is going to vary as follows:
n ---> n/2 ---> n/4 -----------> 1 OR
n/2^0 ---> n/2^1 ---> n/2^2 --------------> 1

We can see that 'i' takes the form of n/2^k 
Therefore, n/2^k >= 1 
n >= 2^k 
log n >= log 2^k
log n >= k log 2 (base of log is 2, therefore, log 2 = 1)
log n >= k
i.e.  k <= log n

Time Complexity is O(log n)

*/