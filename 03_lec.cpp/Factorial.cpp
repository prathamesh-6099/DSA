#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int fact=1;
    cout<<"ENter number to Find factorial ";
    cin>>n;
    for(i=n;i>1;i--){
        fact*=i;

    }
    cout<<"Factorial of given number is "<<fact;

}