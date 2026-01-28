#include<iostream>
using namespace std;
/*int main(){
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
}*/
int main(){
    int i,j;
    int n=4;
    char op='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<op;
            op++;
        }
        cout<<endl;
    }
    return 0;
}