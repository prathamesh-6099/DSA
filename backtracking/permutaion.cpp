#include<iostream>
#include <string>
using namespace std;


void permutaion(string str,string ans){
    if(str.size()==0){
        cout<<ans<<endl;
    }
    int sz=str.size();

    for(int i=0; i<str.size();i++){
         char chr=str[i];
         string next_str=str.substr(0,i)+ str.substr(i+1,sz-i-1);
        permutaion(next_str,ans+chr);
    }
int main(){
string str="abc";
string ans="";
permutaion(str,ans);                                   
    return  0;
} 