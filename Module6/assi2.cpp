#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=0;i<5;i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}