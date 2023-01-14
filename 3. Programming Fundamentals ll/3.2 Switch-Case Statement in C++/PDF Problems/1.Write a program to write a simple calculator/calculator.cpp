// C++ program to create calculator using\
switch statement

#include<iostream>
using namespace std;

int main () {

    float n1,n2;
    char op;

    cout<<"Perform action: ";
    cin>>n1>>op>>n2;

    switch (op)
    {
    case '+' :
        cout<<n1+n2<<endl;
        break;
    case '-' :
        cout<<n1-n2<<endl;
        break;    
    case '*' :
        cout<<n1*n2<<endl;
        break;
    case '/' :
        cout<<n1/n2<<endl;
        break;
        
    default:
        cout<<"Operator not found!\n";
        break;
    }

    return 0;
}