// Question 2 : For a given integer array of size N. You have to find all the occurrences 
// (indices) of a given element (Key) and print them. 
// Use a recursive function to solve this problem. 
// Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2 
// Sample Output : 1 5 7 8

#include <iostream>
using namespace std;

void find_occurances(int arr[],int key,int n,int start){
  
   if(start==n){
    return;
   }
   if(key==arr[start]){
    cout<<start<<" ";
   }
   return find_occurances(arr,key,n,start+1);

}

int main(){
    int arr[]={12,32,43,12,56,12};
    int n=6;
   find_occurances(arr,12,n,0);

    return 0;
}