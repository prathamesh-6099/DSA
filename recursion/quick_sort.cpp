#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei);

void quick_sort(int arr[],int si,int ei){

    if(si>=ei){
        return;
    }

    int pi;
    pi=partition(arr,si,ei);
    quick_sort(arr,si,pi-1);
    quick_sort(arr,pi+1,ei);
}

int partition(int arr[],int si,int ei){

   int i=si-1;
    int j=0;
    int pi=arr[ei];

    for(j=si;j<ei;j++){
        if(arr[j]<=pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}

int main(){
    int arr[]={42,43,54,64,74,84};
    quick_sort(arr,0,5);

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}