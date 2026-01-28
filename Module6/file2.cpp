#include<iostream>
using namespace std;
/*int main(){
    int n=4,i;
    for(i=1;i<=n;i++){
    for(int j=1; j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}*/
int main(){
    int i,n,j;
    n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}