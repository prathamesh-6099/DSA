#include<iostream>
using namespace std;

void Binary(int n,string ans,char last_place){
    if(n==0){
        cout<<"ans: "<<ans<<endl;
        return;
    }

    if(last_place=='1'){
        Binary(n-1,ans+'0','0');
       
    }
    else {
        Binary(n-1,ans+'1','1');
        Binary(n-1,ans+'0','0');
    }

}

int main(){
Binary(5,"",'0');
   

    return 0;
}