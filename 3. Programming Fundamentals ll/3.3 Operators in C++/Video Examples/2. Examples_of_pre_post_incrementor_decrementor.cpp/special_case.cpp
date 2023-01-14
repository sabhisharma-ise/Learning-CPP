//When you try to set a variable to the post-increment of itself,\\
you actually don’t change the value at all.

#include<iostream>
using namespace std;

int main () {

    int a = 10;

    cout<<"Value of a before post-incrementing\n";
    cout<<a<<endl;

    a = a++;  // Value of a will not change

    cout<<"Value of a after post-incrementing\n";
    cout<<a<<endl;

    return 0;
}