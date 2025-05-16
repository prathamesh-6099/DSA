#include <iostream>
using namespace std;

void printUniqueElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Example usage
int main() {
    int arr[] = {4, 5, 7, 4, 8, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique elements: ";
    printUniqueElements(arr, size);
    return 0;
}