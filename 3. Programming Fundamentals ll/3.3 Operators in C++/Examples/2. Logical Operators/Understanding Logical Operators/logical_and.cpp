//Understanding The Logical AND Operator (&&)

#include<iostream>
using namespace std;

int main() {

    cout<< "Enter a number: ";
    int x;
    cin>>x;

    if (x > 0 && x <= 10) {
        cout<< "Number is between 1 and 10\n";
    }
    else {
        cout<< "Number is not between 1 and 10\n";
    }

    return 0;

//to see if the number is greater than 0 and also less than or equal to 10.\
If both of these statements are true, the number must fall between 1 and 10,\
and we can output that this is the case.

}

