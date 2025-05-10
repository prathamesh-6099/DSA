#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int space = 0; space < n - i; space++) {
            cout << " ";
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
