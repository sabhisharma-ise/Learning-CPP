//Function to print the two numbers and add 

#include<iostream>

void print (int num) {   //Funtion to print the number

    std::cout << num << "\n";

    return;

}

int add (int num1, int num2) {  //Funtion to add the two numbers

    print (num1);   //Calling the print function

    print (num2);

    int sum = num1 + num2;

    return sum;

}

int main () {

    int a, b;
    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    int sum = add (a, b);    //Calling the add function

    std::cout << "The Sum is " << sum;

    return 0;

}