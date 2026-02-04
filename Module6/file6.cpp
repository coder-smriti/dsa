#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter tehe value of n";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"*";
        for(j=1;j<=n-1;j++){
            if(i==1||i==n){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    return 0;
}
