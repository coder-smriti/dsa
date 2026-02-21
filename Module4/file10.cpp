#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"enter the op:";
    cin>>op;
    //calculator
    if(op=='+'){
     cout<<"a+b="<<(a+b)<< endl;
    }else if(op=='*'){
    cout<<"a*b="<<(a*b)<< endl;
    }else if(op=='/'){
    cout<<"a/b="<<(a/b)<< endl;
    }else{
    cout<<"Invalid Operator.";
    }
}
    