#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    int i;
    cout<<"Enter number";
    cin>>n;
     for(i=1;i<=n;i++) {
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"sum "<<sum;

    return 0;
}