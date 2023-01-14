// Print all prime numbers between two given numbers
// Pepcoding

#include<iostream>
#include<cmath>

int main () {

    int a, b;

    std::cout << "Enter the two numbers: ";
    std::cin >> a >> b;
    
    for (int num = a; num <= b; num++) {

        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (num == 1 || num == 0) {

            continue;
        }

        int count = 0;
        
        //check for prime
        for (int div = 2; div <= sqrt(num); div++) {

            if (num % div == 0) {

                count++;            //In a nested loop, a break statement only stops the loop it is placed in.
                break;              //Therefore, if a break is placed in the inner loop, the outer loop still continues.
            }                       //However, if the break is placed in the outer loop, all of the looping stops.            
        }                           

        //check for value of count
        if (count == 0) {

            std::cout << num << " ";

        }
    }

    return 0;

}