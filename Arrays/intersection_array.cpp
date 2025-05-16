#include<iostream>
using namespace std;




int intersection(int arr1[], int arr2[], int size1, int size2) {
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout<<arr1[i]<<" ";
    
                count++;
                break; // Move to the next element in arr1
            }
        }
    }
    cout<<endl;
    // Print the common elements
    return count;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result = intersection(arr1, arr2, size1, size2);
    cout << "Number of common elements: " << result << endl;

    return 0;
}
