#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is not a power of 2." << endl;
    } else {
        while (n % 2 == 0) {
            n = n / 2;
        }
        if (n == 1) {
            cout << "It is a power of 2." << endl;
        } else {
            cout << "It is not a power of 2." << endl;
        }
    }

    return 0;
}
