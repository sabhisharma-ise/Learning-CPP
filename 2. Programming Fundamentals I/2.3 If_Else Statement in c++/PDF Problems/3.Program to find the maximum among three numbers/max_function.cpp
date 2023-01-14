#include<iostream>

int max (int num1, int num2) {

    if (num1 > num2) {

        return num1;
    } 
    else {

        return num2;

    }
}

int main () {

    int a, b, c;
    std::cout << "Enter the three numbers: ";
    std::cin >> a >> b >> c;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << " ";
    std::cout << "c = " << c << "\n";

    int max1 = max(a, b);   // Maximum of a and b is assigned to max1

    int max2 = max(b, c);   // Maximum of b and c is assigned to max2

    int maximum = max(max1, max2);  //Maximum of max1 and max2 is assigned to maximum, which is our final answer i.e. Maximum of all the three numbers 

    std::cout << "Maximum Number is " << maximum;

return 0;

}