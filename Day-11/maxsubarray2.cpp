#include<iostream>
#include <climits>
using namespace std;

void print_max_sum_subarrays(int *arr,int n){
int maxsum=INT_MIN;

for(int start=0;start<n;start++){
    int cursum=0;
    for(int end=start;end<n;end++){
        cursum+=arr[end];
    //  cout<<"cursum="<<cursum<<",";
     maxsum=max(maxsum,cursum);                                            
}
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