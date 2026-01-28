#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n:";
    cin>>n;
    int num = n;
    int lastdig;
    int cubeSum = 0;
    while(num>0){
         lastdig = num%10;
        cubeSum += lastdig*lastdig*lastdig;
        num /=10;
    }
    if(n==cubeSum){
        cout<<"Aramstrong number\n";
    }else{
        cout<<"Not an Aramstrong number\n";
    }
    return 0;
}