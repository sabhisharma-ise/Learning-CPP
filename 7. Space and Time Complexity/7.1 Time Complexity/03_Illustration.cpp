// To Find the Time Complexity of the program

#include <iostream>

int main()
{

    // Main program starts
    int n, m;
    std::cin >> n >> m;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = a + 1;
    }

    for (int i = 1; i <= m; i++)
    {
        a = a + 1;
    }

    return 0;
}

/*

In this example, there are two 'for' loops.

For 1st for-loop ---> a = a + 1 will run 'n' times

For 2nd for-loop ---> a = a + 1 will run 'n' times

Total no. of times a = a + 1 will run
= n + m

Time Complexity is O(n + m)

*/