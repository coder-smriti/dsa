#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL:
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int data){
   Node* newNode= new Node(data);
   if(head==NULL){
    head=tail=new Node(data);   
   }else{
    tail->next=newNode;
   }
    }
    void pop(){

    }
    int front(){

    }
    bool empty(){

    }
};
int main(){
    return 0;
}