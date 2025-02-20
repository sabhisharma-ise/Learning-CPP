/* Pattern 27

      1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11

*/

// CPP program to print Trapezium Pattern
//https://www.geeksforgeeks.org/program-to-print-the-trapezium-pattern/

#include <iostream>

using namespace std;

int main()
{

	int num;
    cout << "Enter number: ";
    cin >> num;
	int space;

	int i, j, lterm, rterm;

	// The terms on the LHS of the pattern
	lterm = 1;

	// The terms on the RHS of the pattern
	rterm = num * num + 1;

	for (i = num; i > 0; i--) {

		// To print number of spaces
		for (space = num; space > i; space--)
			cout << "  ";

		for (j = 1; j <= i; j++) {
			cout << lterm;
			cout << " ";
			lterm++;
		}
		for (j = 1; j <= i; j++) {
			cout << rterm;
			if (j < i)
				printf(" ");
			rterm++;
		}

		// To get the next term on RHS of the Pattern
		rterm = rterm - (i - 1) * 2 - 1;
		cout << endl;
	}
}
