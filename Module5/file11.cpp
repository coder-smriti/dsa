#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;
    int digsum=0;
    while(n>0){
        int lastdig = n%10;
        if (lastdig % 2 !=0){
        digsum += lastdig;
        }
    n=n/10;
    }
    cout<<"sum= "<<digsum<<endl;
    return 0;
}