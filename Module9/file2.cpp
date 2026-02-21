#include<iostream>
using namespace std;
int main(){
    int a=10;
    float pi=3.14;
    float *ptr2=&pi;
    int *ptr=&a;
    cout<<&pi<<"="<<ptr2<<"\n";
    cout<<&a<<" = "<< ptr <<"\n";
    return 0;
    }