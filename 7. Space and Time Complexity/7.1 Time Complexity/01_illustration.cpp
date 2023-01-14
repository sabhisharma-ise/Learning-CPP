// To Find the Time Complexity of the program

#include <iostream>

int main()
{

    // Main program starts
    int n;
    std::cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = a + 1;
    }

    return 0;
}

/*

First, Lets see how many times a = a + 1 statement executes!

The for loop will run:
i = 1, 2, 3, 4, ....., n
i.e. 'n' times

Time Complexity is Linear: O(n)

*/