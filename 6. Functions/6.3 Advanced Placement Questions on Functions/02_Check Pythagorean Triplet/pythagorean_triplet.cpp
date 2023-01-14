//Check Pythagorian Triplet

#include<iostream>
#include<cmath>

int max (int a, int b, int c) {

    int max; 

    if (a > b) {

        (a > c) ? max = a : max = c;
    }

    else {

        (b > c) ? max = b : max = c;
    }

    return max;
}

void check_PythagorianTriplet (int x, int y, int z) {

    int a, b, c;

    a = max (x, y, z);

    if (a == x) {

        b = y;
        c = z;
    }

    else if (a == y) {

        b = x; 
        c = z;
    }

    else {

        b = x;
        c = y;
    }

    if (a * a == b * b + c * c) {

        std::cout << "Pythagorean Triplet";
    }
    
    else {

        std::cout << "Not a pythagorean triplet";;
    }

    return;
}

int main () {

    int x, y, z;

    std::cout << "Enter x, y, z: ";
    std::cin >> x >> y >> z;

    check_PythagorianTriplet (x, y, z);

    return 0;
    
}