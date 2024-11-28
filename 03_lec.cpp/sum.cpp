#include <iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    int sum=0;
    cout<<"Enter  umbers to be print \n";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;

    }
   cout<<"Sum="<<sum;

    return 0;
}
