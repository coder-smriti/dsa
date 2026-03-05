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
    int getsize(){
        int sz=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n){
        int size=getsize();
        Node* prev=head;
        for(int i=1; i<(size-n); i++){
            prev=prev->next;
        }
        Node* toDel= prev->next;
        cout<<"going to delete:"<<toDel->data<<endl;
        prev->next=prev->next->next;
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
    ll.removeNth(5);
    ll.printList();
    return 0;
}