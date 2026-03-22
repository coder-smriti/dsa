#include<iostream>
#include<queue>
#include<stack>
class Queue{
    int *arr;
    int capacity;
    int n=capacity;
    int currsize;
    int f,r;
    public:
    Queue(int capacity){
        this->capacity=capacity;
        arr=new int (capacity);
        currsize=0;
        f=r=-1;
    }
    void push(int data){
        r=(r+1)%n;
        arr[r]=data;
        currsize++;
    }
    void pop(){
        if(empty()){
            cout<<"Queue is empty\n";
        }
    }
}