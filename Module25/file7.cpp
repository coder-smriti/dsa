#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
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
    void push_front(int val){
        Node* newNode = new Node(val);//dynamically
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head=newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp= head;
        for (int i=0; i<pos-1; i++){
            temp = temp->next;
//if(temp== NULL, cout<<"position os INVALID\n, return")
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front(){
        if(head==NULL){
            cout<<"ll is empty";
            return ;
        }
        Node* temp= head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(5);
    ll.printList();
    ll.pop_front();
    ll.printList();
   //1->2->3;
    return 0;
}