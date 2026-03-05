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
        public:
    Node* head;
    Node* tail;
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

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next !=NULL){
        prev=slow;
        slow=slow->next;
        fast = fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;//split T MIDDLE
}

      Node* merge(Node* left, Node* right){
        List ans;
        Node* i=left;
        Node* j=right;
        while(i!=NULL && j!=NULL){
            if(i->data <= j->data){
                ans.push_back(i->data);
                i=i->next;
            }else{
                ans.push_back(j->data);
                j=j->next;
            }
        }
        while(i!=NULL){
            ans.push_back(i->data);
            i=i->next;
        }
        while(i != NULL){
               ans.push_back(j->data);
            j=j->next;
        }
        return ans.head;
    }
Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
     return;
    }
    Node* rightHead=splitAtMid(head);
    Node* left = mergeSort(head);
    Node* rightmergeSort(rightHead);
    mergeSort(head);
    mergeSort(righthead);
    return merge(head,right);
}   
};
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next = NULL;
    while(curr!= NULL){
      next = curr-.next;
      curr->next = prev;
      prev=curr;
      curr=next;  
    }
    return prev;
}
 void zigZagLL(Node* head){
    Node* rightHead=splitAtMid(head);
    Node* rightHead=reverse(rightHead);
 }

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(5);
    return 0;
}