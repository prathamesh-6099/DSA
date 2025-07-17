// Question 2 : Print out the sum of the numbers in the second row of the “nums” array. 
// Example : 
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} }; 
// Output - 18 

#include <iostream>
using namespace std;

int  main(){
int sum=0;

int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}


    for(int j=0;j<3;j++){
      sum+=arr[1][j];
    }

cout<<"sum= "<<sum;
    return 0;
}