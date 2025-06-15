#include<iostream>
using namespace std;

void print_subarrays(int *arr,int n){


for(int start=0;start<n;start++){
    for(int end=start;end<n;end++){
        // cout<<start<<","<<end;
        for(int i=start;i<=end;i++){
            cout<<arr[i];
        }
        cout<<", ";
     }
    cout<<endl;
}
}

int main()
{
int array[5]={1,2,3,4,5};
int sz=sizeof(array)/sizeof(int);
print_subarrays(array,5);

return 0;
}