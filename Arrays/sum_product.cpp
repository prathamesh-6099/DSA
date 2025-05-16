#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}      

int product(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}



int main(){
    int arr[]={2,3,4,5};
    int size=4;
    cout<<"Sum of array is "<<sum(arr,size)<<endl;
    cout<<"Product of array is "<<product(arr,size)<<endl;
    return 0;
}

// This code defines two functions, `sum` and `product`, which calculate the sum and product of elements in an array, respectively.
// The `main` function initializes an array and calls these functions, printing the results to the console. 
// The `sum` function iterates through the array, adding each element to a running total, while the `product` function multiplies each element together.
// The program demonstrates basic array manipulation and function usage in C++. 