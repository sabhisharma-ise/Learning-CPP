// Half Pattern After 180° Rotation with 'n' (Taking Input from the User)

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (j <= (n - i)) {

                std::cout << "  ";

            }

            else {

                std::cout << "* ";

            }
        }

        std::cout << "\n";
    }

    return 0;
}
