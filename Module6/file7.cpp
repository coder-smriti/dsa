#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(i=1;i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            for(j=1;j<=i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}