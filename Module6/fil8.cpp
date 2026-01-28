#include<iostream>
using namespace std;
/*int main(){
    int n=4;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/
int main(){
    int i,j;
    int n=5;
    int num=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}