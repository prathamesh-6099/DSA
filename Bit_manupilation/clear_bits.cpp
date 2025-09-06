#include <iostream>
using namespace std;

int main(){
    int n=31;
    int i=1;
    int j=3;
    for(i=1;i<=j;i++){
        n=n&~(1<<i);
    }

    cout<<"num= "<<n<<endl;
}
