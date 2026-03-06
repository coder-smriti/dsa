#include<iostream>//error
#include<list>
#include<iterator>
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
void push_back(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head=tail=newNode;
    }else{
        tail->next=newNode;
        tail=newNode
    }
}
void printList(list<int> ll){
list<int>::iterator itr;
    for(itr=ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
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
    return merge(head,right)
}
    
         
int main(){
    list<int> ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    printList(ll);
    mergeList(ll.head);
    ll.head=mergeSort(ll.head);
    return 0;
}