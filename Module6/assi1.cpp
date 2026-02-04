#include<iostream>
using namespace std;
int main(){
    bool val = true;
    int n=5;
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=i;j++){
                cout<<val<<" ";
                val=!val;
    }
    cout<<"\n";
}
    return 0;
}