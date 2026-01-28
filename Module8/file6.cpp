#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true ;
    }else{
        return false;
    }
}
int main (){
    int n;
    cout<<"enter the n:";
    cin>>n;
    cout<<isEven(n)<<endl;
    return 0;
}