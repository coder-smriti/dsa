#include<iostream>
using namespace std;
int checkprime(int n){
    if(n<=1)
    return 0;
    for(int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int result=checkprime(4);
    if(result == 1)
    cout<<"Prime";
    else
    cout<<"Non Prime";
    return 0;
}