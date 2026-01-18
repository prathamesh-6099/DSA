#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ll){
    list<int> :: iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){

        cout<<(*itr)<<"->";

    }

    cout<<"NULL"<<endl;

}

int main(){
    list<int> ll;
    ll.push_front(23);
    ll.push_front(52);
    ll.push_back(42);
    ll.push_back(31);


    printList(ll);
    cout<<"front: "<<ll.front()<<endl;
    cout<<"back: "<<ll.back()<<endl;
    cout<<ll.size()<<endl;

    cout<<"pop back !!"<<endl;
    ll.pop_back();
    printList(ll);

    cout<<"Pop front !!"<<endl;
    ll.pop_front();
    printList(ll);

return 0;
}