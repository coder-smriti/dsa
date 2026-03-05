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
    bool isCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL&& fast->next != NULL){
          slow=slow->next;
          fast = fast->next->next;
          if(slow==fast){
            cout<<"cycle exists\n";
            return true;
          }
        }
        cout<<"cycle doesn't exist\n ";
        return false; 
    }
};
    void removeCyvle(Node* heead){
        Node* slow=head;
        Node* fast=head;
        bool isCycle=false;
        while(fast != NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"cycle exists\n";
                isCycle = true;
            }
        }
        if(!isCycle){
            cout<<"cycle doesn't exists";
            return ;
        }
       slow=head;
       if(slow==fast) {//special case-tail->head
          if(slow==fast){
            while(fast->next!=slow){
                fast = fast>next;
            }
            fast->next=NULL;
       }else{
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
       }
    }
}
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(5);
    ll.tail->next=ll.head;
    isCycle(ll.head);
    removeCycle(ll.head);
    printList(ll.head);
    return 0;
}