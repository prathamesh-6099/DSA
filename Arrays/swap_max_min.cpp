#include<iostream>
#include<climits>
using namespace std;

void swapMaxMin(int arr[], int sz) {
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }
    // Swap the min and max elements
    swap(arr[minIdx],arr[maxIdx]);
}


int main(){
int array[]={12,14,13,32,23};
int size=5;
swapMaxMin(array,size);
cout<<"Array after swapping"<<endl;
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
    return 0;
}