// The sizeof() operator returns the size of the variable

#include <iostream>
using namespace std;

int main()
{
	//When operand is a Data Type. 
	cout << sizeof(char)<<"\n";
	cout << sizeof(int)<<"\n";
	cout << sizeof(float)<<"\n";
	cout << sizeof(double)<<"\n";

	//When operand is an expression. 
	int a = 0;
	double d = 10.21;
	cout << sizeof(a + d) << endl;


	return 0;
}
