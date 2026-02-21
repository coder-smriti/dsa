#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial("<<n<<")="<<fact<<endl;
    return fact;
}
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    factorial(n);
    return 0;
}