#include<iostream>
#include <climits>
using namespace std;

void print_max_sum_subarrays(int *arr,int n){
int maxsum=INT_MIN;
int cursum=0;

for(int i=0;i<n;i++){
    cursum+=arr[i];
    if(cursum<0){
        cursum=0;
    }
    maxsum=max(maxsum,cursum);
}
cout<<"Max sum="<<maxsum;
}

int main()
{
int array[5]={1,2,3,4,5};
int sz=sizeof(array)/sizeof(int);
print_max_sum_subarrays(array,5);

return 0;
}