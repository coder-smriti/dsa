#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    int fact=1;
    cout<<"enter the n:";
    cin>>n;
    for(i=1;i<=n;i++){
           fact *=i;
    }
    cout<<"factorial of " << n << "="<<fact<<"\n";
    
    return 0;
}