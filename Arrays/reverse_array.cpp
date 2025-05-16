#include <iostream>
using namespace std;

// Function to reverse an array using swap
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
int array[] = {1, 2, 3, 4, 5};      
int size = sizeof(array) / sizeof(array[0]);
cout << "Original array: ";
for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
}
cout << endl;

reverseArray(array, size);
cout << "Reversed array: ";         
for (int i = 0; i < size; i++) {
    cout << array[i] << " ";


}   cout << endl;

    return 0;
}