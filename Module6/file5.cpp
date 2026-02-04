#include<iostream>
using namespace std;
int main(){
    int j;
    char ch = 'A';
    for(int i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}