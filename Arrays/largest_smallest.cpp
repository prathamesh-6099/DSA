#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int array[] = {14, 244, 121, 41, 1, 24, 12, 123};
    int size = sizeof(array) / sizeof(int);
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smallest_ind=0;
    int largest_ind=0;

    for (int i = 0; i < size; i++)
    {
        smallest=min(smallest,array[i]);
        largest=max(largest,array[i]);
    }

    //Linear Search........
    for(int i=0;i<size;i++){
        if(smallest==array[i]){
            smallest_ind=i;
        }
        if(largest==array[i]){
            largest_ind=i;
        }
    }

    cout<<"Smallest number of array is "<<smallest<<" at "<<smallest_ind<<" index"<<endl;
    cout<<"largest number of array is "<<largest<<" at "<<largest_ind<<" index"<<endl;
    return 0;
}