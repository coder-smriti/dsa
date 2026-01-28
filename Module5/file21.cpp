#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;
    bool isPrime=true;//sqrt n.
    for(int x=2; x<=sqrt(n); x++){
       if(n%x==0){
        isPrime=false;
        break;
       }
    }
    if(isPrime==true){
        cout<<"number is Prime"<<endl;
    }else{
        cout<<"number is not prime"<<endl;
    }
    return 0;
}