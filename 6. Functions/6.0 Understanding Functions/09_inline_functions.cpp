//Following is an Example of an Inline Function

#include<iostream>

inline int addition (const int &a, const int &b) {

    return (a + b);

}

int main () {

    int a, b, result;
    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    result = addition (a, b);
    std::cout << "Result of addition: " << result;
}

//As shown above, we precede the function definition with a keyword “inline” in order to make a function inline.