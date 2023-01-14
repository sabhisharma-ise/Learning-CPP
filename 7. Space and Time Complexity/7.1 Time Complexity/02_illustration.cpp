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
        for (int j = 1; j <= n; j++)
        {
            a = a + 1;
        }
    }

    return 0;
}

/*

Lets see how many times a = a + 1 statement will execute!

When i = 1: j = 1, 2, 3, ...., n  i.e. 'n' times
When i = 2: j = 1, 2, 3, ...., n  i.e. 'n' times
When i = 3: j = 1, 2, 3, ...., n  i.e. 'n' times
.
.
When i = n: j = 1, 2, 3, ...., n  i.e. 'n' times

Total no. of times a = a + 1 will run
= n + n + n + ....... + n (upto 'n' terms)
= n x n
= n^2

Time Complexity is Quadratic: O(n^2)

*/
