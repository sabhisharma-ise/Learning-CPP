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
        for (int j = 1; j <= m; j++)
        {
            a = a + rand();
        }
    }

    return 0;
}

/*

When i = 1: j = 1, 2, 3, ..., m  i.e. 'm' times
When i = 2: j = 1, 2, 3, ..., m  i.e. 'm' times
When i = 3: j = 1, 2, 3, ..., m  i.e. 'm' times
.
.
When i = n: j = 1, 2, 3, ..., m  i.e. 'm' times

Total no. of times a = a + rand() will execute
= m + m + m + ...... + m (upto 'n' times)
= m x n

Time Complexity is O(mn)

*/