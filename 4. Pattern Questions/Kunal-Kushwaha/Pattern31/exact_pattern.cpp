/* Pattern31 (HackerRank problem)

         4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   

*/

#include<iostream>
#include <algorithm>

int main () 
{

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= (2 * n - 1); row++) 
    {

        for (int col = 1; col <= (2 * n - 1); col++) 
        {

            int numToBePrinted = n - std::min({(col - 1), (row - 1), ((2 * n - 1) - col), ((2 * n - 1) - row)});

            std::cout << numToBePrinted << " ";
        }

        std::cout << "\n";
    }

    return 0;
}