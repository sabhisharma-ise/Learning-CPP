// calculate powers of 2 using left shift operator 

#include<iostream>
using namespace std;

int main() {

    int i;
    cout << "To calculate Pow(2,i), please input i: ";
    cin>>i;

    cout << "Pow(2," << i << ")= " << (1 << i) << endl; 

    //What is the maximum power?\
    Since int consists of 32 bits (31 bits for positive numbers) you get an overflow.\
    but then keep in mind the maximum will be a power of 30.

    return 0;
}