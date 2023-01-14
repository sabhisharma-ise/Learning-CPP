#include<iostream>

int main() {

    #ifndef ONLINE_JUDGE //not part of code, used to beautify input output
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif

    int savings;
    std::cin>>savings;

    if (savings > 5000) {
        std::cout<<"Neha\n";
    }
    else if (savings > 2000) {
        std::cout<<"Rashmi\n";
    }
    else {
        std::cout<<"Friends\n";
    }

    return 0;
}