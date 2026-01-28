#include <iostream>
using namespace std;
int main(){
    int n,i;
    n=4;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
        }
        for(int j=1; j<=i; j++){
        cout<<"*";
        }
        cout<<endl;
        }
    for(i=n; i>=1; i--){
       for (int j=1; j<=i; j++){
        cout<<"*";
       }
       for(int j=1; j<=2*(n-i); j++){
        cout<<" ";
       }
       for(int j=1; j<=i; j++){
        cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}