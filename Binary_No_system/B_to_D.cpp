#include<iostream>
using namespace std;

int conversion(int num){
    int ans=0,pow=1;

    while(num>0){
        int rem=num%10;
        ans=ans+rem*pow;

        num=num/10;
        pow*=2;
      
    }
    return ans;
}

int main(){
cout<<conversion(10100);

    return 0;
}