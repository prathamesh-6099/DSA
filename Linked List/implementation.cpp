#include <iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

    ~Node(){
        // cout<<"~Node"<<endl;

        if(next != NULL){
            delete next;
            next=NULL;
        }
    }


};

class List{

    Node* head;
    Node* tail;

public:
    List(){
        head=NULL;
        tail=NULL;
    }

    ~List(){
        // cout<<"~List"<<endl;
        if(head != NULL){
            delete head;
            head= NULL;
        }
    }

    void push_front(int val){

        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        } else{
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{          
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node* temp;
        temp=head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }

    void insert(int val, int pos){
        Node* newNode=new Node(val);
        Node* temp;
        temp=head;

        if(temp==NULL){
            cout<<"Invalid Index";
            return;
        }

        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }

    void pop_front(){

        if(head==NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        Node*temp;
        temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }

    void pop_back(){

        Node* temp=head;
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
};

int main(){
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
// output : 1->2->3->NULL
    l1.push_back(4);
    l1.push_back(5);
// output : 1->2->3->4->5->NULL
    l1.printList();
    l1.insert(100,2);
    l1.printList();
    l1.pop_front();
    l1.pop_back();
    l1.printList();
    return 0;
}