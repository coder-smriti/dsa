#include<iostream>
using namespace std;
/*int main(){
    int n=4;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/
int main(){
    int i,j;
    int n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}