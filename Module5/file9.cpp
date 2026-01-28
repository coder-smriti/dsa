#include<iostream>
using namespace std;
int main(){
    int n,lastdig;
    int digsum=0;
    cout<<"enter the n= ";
    cin>>n;
    while(n>0){
        lastdig=n%10;
        digsum += lastdig;
        n=n/10;
    }
    cout<<"sum= "<< digsum<<endl;
    return 0;
}