// *      *
// **    **
// ***  ***
// ********
// ********

// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        // Stars on left
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Spaces in middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Stars on right
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--)
    {
        // Stars on left
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Spaces in middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Stars on right
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}