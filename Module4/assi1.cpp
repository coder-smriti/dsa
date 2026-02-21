#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num:";
    cin>>num;
    if(-1*num){
        cout<<"num is negative.";
    }else if(num){
        cout<<"num is positive.";
    }else {
        cout<<"num is zero.";
    }
    return 0;
}