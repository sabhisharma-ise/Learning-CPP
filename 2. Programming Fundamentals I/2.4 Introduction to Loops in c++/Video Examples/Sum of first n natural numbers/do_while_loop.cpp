#include<iostream>

int main () {

    int n;
    std::cout<<"Enter an integer\n";
    std::cin>>n;

    do {
        std::cout<<n<<"\n";
        std::cin>>n;
    } while (n > 0);

    return 0;
}