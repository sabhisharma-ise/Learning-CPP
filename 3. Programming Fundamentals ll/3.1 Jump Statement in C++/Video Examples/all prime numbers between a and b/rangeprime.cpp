#include<iostream>
using namespace std;

int main () {

    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;

    int num;
    for (num = a; num <= b; ++num) {
        int i;
        for (i = 2; i < num; ++i) {
            if (num%i == 0) {
                break;
            }
        }
        if (i == num) {
            cout<<num<<endl;
        }
    }

    return 0;
}