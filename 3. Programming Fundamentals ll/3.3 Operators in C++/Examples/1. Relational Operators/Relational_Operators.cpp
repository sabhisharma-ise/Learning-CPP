#include<iostream>
using namespace std;

int main () {

int x = 10;
int y = 15;
int z = 10;

//Illustration  Is Equal To (==) Operator
cout<<(x == y)<<endl;  //false
cout<<(x == z)<<endl;  //true

//Illustration  Not Equal To (!=) Operator
cout<<(x != y)<<endl;  //true
cout<<(x != z)<<endl;  //false

//Illustration  Greater Than (>) Operator
cout<<(x > y)<<endl;   //false
cout<<(y > x)<<endl;   //true

//Illustration  Less Than (<) Operator
cout<<(x < y)<<endl;   //true
cout<<(y < x)<<endl;   //false

//Illustration  Greater Than or Equal To (>=) Operator
cout<<(x >= y)<<endl;  //false
cout<<(y >= x)<<endl;  //true
cout<<(z >= x)<<endl;  //true

//Illustration  Less Than or Equal To (<=) Operator
cout<<(x <= y)<<endl;  //true
cout<<(x <= z)<<endl;  //true

return 0;

}