//Fibonacci Series up to n number of terms

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int prev, curr, next;

    prev = -1;
    curr = 0;
    next = 1;

    for (int i = 1; i <= n; i++) {     

        if (i == 1) {

            std::cout << curr << " ";
            continue;
        }

        if (i == 2) {

            std::cout << next << " ";
            continue;
        }
        
        prev = curr;
        curr = next;
        next = prev + curr;

        std::cout << next << " ";
    }


    return 0;
}