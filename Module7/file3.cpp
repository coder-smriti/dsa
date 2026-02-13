#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        cout<<true;
    }else{
        cout<<false;
    }
}
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    isEven(n);
return 0;
}