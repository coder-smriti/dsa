#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class Stack{
   vector<T> vec;
   public:
   void push(T val){
    vec.push_back(val);
   }
   void pop(){
    if(isEmpty()){
        cout<<"stack is empty";
        return;
    }
    vec.pop_back();
   }
   T top(){
    //if(isEmpty()){
        //cout<<"stack is empty\n";
       // return -1;
    //}//
    int LastIdx=vec.size()-1;
    return vec[LastIdx];
   }
   bool isEmpty(){
    return vec.size()==0;
   }
};
int main(){
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
