#include<iostream>
using namespace std;
int main(){
    int n;
    int lastdig;
    int res=0;
    cout<<"enter the n: ";
    cin>>n;
    while(n>0){
     lastdig = n%10;
     res = res*10+ lastdig;
    n=n/10;
    }
    cout<<"reverse= "<<res<<endl;
    return 0;
}