#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i;
    for(i=2;i<=n;i++){
        for(int j=1; j<=n-3*i-1; j++){
            if(j%2==0){
           cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}