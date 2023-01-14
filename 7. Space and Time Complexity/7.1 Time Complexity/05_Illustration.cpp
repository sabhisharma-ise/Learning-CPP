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

    for (int i = 1; i <= n; i++)
    {
        a = a + rand();
    }

    return 0;
}

/*

This example is very similar the previous problem (Illustration 5), 
but with an addition of a for-loop.

Therefore, It's Time Complexity is O(m x n) + O(n)
= O(m x n + n) OR
= O(mn + n) 

*/