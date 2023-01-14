//heart pattern

#include<iostream>
using namespace std;
int main()
{
	int num1=3, end=4;
	for (int i=1; i<=3; i++)
	{
		for (int j=i; j<=3; j++)
		{
			cout<<"  ";
		}
		for (int k=1; k<=end; k++)
		{
			cout<<"* ";
		}
		
		cout<<"  ";
		for (int j=7-2*i-1; j>0; j--)
		{
			cout<<"  ";
		}
		for (int k=1; k<=end; k++)
		{
			cout<<"* ";
		}
		end+=2;
		cout<<endl;
	}
	
	for (int i=0; i<=9; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<"  ";
		}
		for (int k=2*i-1; k<=17; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}