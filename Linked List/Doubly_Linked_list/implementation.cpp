#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=tail=NULL;

    }

    void push_front(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
            newNode->next=NULL;
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void print_list(){
        Node* temp=head;

        while(temp != NULL){
            cout<<temp->data<<"<==>";
            temp=temp->next;
            
        }
        cout<<"NULL"<<endl;

    }

    void pop_front(){
        Node* temp;
        temp=head;

        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;

        }
        head=head->next;
        if(head){
            head->prev=NULL;
        }
        else{
            tail=NULL;
        }

        delete temp;

     
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }

    }

    void pop_back(){
        Node* temp=tail;

        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(tail->prev != NULL){
            tail=tail->prev;
            tail->next=NULL;
        }
        else{
            head=tail=NULL;
        }

        delete temp;
    }


};


int main(){

 DoublyLinkedList l1;
 l1.push_front(12);
 l1.push_front(42);
 l1.push_front(543);
 l1.push_front(366);
 l1.print_list();
 l1.pop_front();
 l1.print_list();
 l1.push_back(42);
 l1.push_back(53);
 l1.print_list();
 l1.pop_back();
 l1.pop_back();
 l1.pop_back();
 l1.print_list();



return 0;
}