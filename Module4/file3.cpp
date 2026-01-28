#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"Enter the value of b:\n";
    cin>>b;
    if(a>b){
        cout<<"a is larger:"<<a<<endl;
    }else{
        cout<<"b is larger:"<<b<<endl;
    }
    return 0;
}