#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<&a<<"\n";
    cout<<*&a<<"\n";
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    return 0;
}