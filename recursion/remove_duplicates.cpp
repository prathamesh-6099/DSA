#include<iostream>
#include<string>
using namespace std;

void remove_duplicate(string str,string ans,int i,bool map[]){
    if(i==str.size()){
        cout<<"ans: "<<ans;
        return ;
    }

    char ch=str[i];
    int mapIdx=(ch-'a');

    if(map[mapIdx]){
        remove_duplicate(str,ans,i+1,map);
    }
    else{
        map[mapIdx]=true;
        remove_duplicate(str,ans+str[i],i+1,map);
    }
}

//without I


void remove_duplicate_without_i(string str,string ans,bool map[]){
    if(str.size()==0){
        cout<<"ans: "<<ans;
        return ;
    }

    char ch=str[str.size()-1];
    str=str.substr(0,str.size()-1);
    int mapIdx=(ch-'a');

    if(map[mapIdx]){
        remove_duplicate_without_i(str,ans,map);
    }
    else{
        map[mapIdx]=true;
        remove_duplicate_without_i(str,ch+ans,map);
    }
}

int main(){
bool map[26]={false};
string ans="";
string str="apnacollege";
remove_duplicate_without_i(str,ans,map);

return 0;

}