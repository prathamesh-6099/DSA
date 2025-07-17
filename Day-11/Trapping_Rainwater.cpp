#include<iostream>
#include <climits>
using namespace std;

int print_Traping_Rainwater(int *height,int n){
int left_max[200000];//dynamic difine not possible
int right_max[200000];
left_max[0]=height[0];
right_max[n-1]=height[n-1];
for(int i=1;i<n;i++){
    left_max[i]=max(left_max[i-1],height[i-1]);
//     cout<<(left_max[i])<<" ";
}
cout<<endl;
for(int i=n-2;i>=0;i--){
    right_max[i]=max(right_max[i+1],height[i+1]);
    // cout<<(right_max[i])<<" "; 
}
int water_trapped=0;
for(int i=0;i<n;i++){
    int cur_water_traped=min(left_max[i],right_max[i])-height[i];
    if(cur_water_traped>0){
        water_trapped+=cur_water_traped;
    }
}

return water_trapped;

}

int main(){
int height[7]={4,2,0,6,3,2,5};
int sz=sizeof(height)/sizeof(int);
cout<<print_Traping_Rainwater(height,sz);

 return 0;
}