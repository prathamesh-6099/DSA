#include <iostream>
using namespace std;
#include <cstring>

int main(){
char str[]="knfiIWIndi";
int size=strlen(str);

for(int i=0;i<size;i++){
 char chr=str[i];
    if(chr>='a' && chr<='z'){
        continue;
    }

    else{
        str[i]=chr-'A'+'a';
    }

  
}
  cout<<"smallest string="<<str;
return 0;
}