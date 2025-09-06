#include<iostream> 
using namespace std;

class Complex{
    int rel;
    int img;
public:
    Complex(int r, int i){
        rel=r;
        img=i;
    }

    void showNum(){
        cout<<rel<<" + "<<img<<"i"<<endl;
    }

    void operator - (Complex &c2){
        int resrel=this->rel - c2.rel;
        int resimg=this->img - c2.img;
        Complex c3(resrel,resimg);
        c3.showNum();
    }

};


int main(){
Complex c1(12,23);
Complex c2(5,7);
c2-c1;

return 0;
}
