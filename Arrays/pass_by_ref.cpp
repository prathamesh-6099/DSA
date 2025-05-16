#include<iostream>
using namespace std;
int passbyref(int arr[],int size){
    cout<<"in func^n"<<endl;
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }
}

int main(){


int arr[]={2,23,34,12};
int size=4;
cout<<"Inside main"<<endl;
passbyref(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
return 0;
}