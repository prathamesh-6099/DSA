// Question 1 : Write a recursive function to perform Binary Search. 
// Input : arr[ ] = {1, 2, 3, 4, 5, 6, 7}, n = 7, key = 5 
// Output : 4 (index of key) 
// *Use the starting index & ending index logic used in rotated, sorted array Qs.
#include <iostream>
using namespace std;

int binary(int arr[],int start,int end,int key){
    int mid=(start+end)/2;

    if(start>end){
        return -1;
    }

    if(arr[mid]==key){
        return mid;
    }

    else if(arr[mid]>key){
        end=mid-1;
        return binary(arr,start,end,key);
    }
    else{
        return binary(arr,mid+1,end,key);
    }

}

int main(){
    int arr[]={12,32,43,49,56,77};
    int n=6;
    int result= binary(arr,0,n-1,56);
    if(result!=-1){
        cout<<"Key is found at index :"<<result<<endl;
    }
    else{
        cout<<"Element is not found in arrry";
    }



    return 0;
}