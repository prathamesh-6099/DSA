#include<iostream>
using namespace std;
int DectoBi(int num){
   int pow=1;
   int Bin=0;
   int rem=0;

   while (num>0)
   { rem=num%2;
      Bin=Bin+ rem*pow;
    pow=pow*10;
    num=num/2;
   }
   return Bin;
   
}

int main(){

    for(int i=1;i<=10;i++){
        cout<<DectoBi(i)<<endl;
    }

}