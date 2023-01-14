// A cast is a special operator that forces one data type to be converted into another

#include<iostream>
using namespace std;

int main() {
    
    //Illustration 1
    char ch = 'a';
    cout << int (ch) << endl;  // It will give ASCII Value of 'a' which is 97

    //Illustartion 2
    float num = 98.76;
    int x1 = (int) num;
    int x2 = int(num);
    int x3 = static_cast<int>(num);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;

    return 0;
}