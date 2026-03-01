#include<iostream>
#include<vector>
using namespace std;
int Pow(int x, int n){
    if(n==0){
        return 1;
    }
    int halfPow=Pow(x,n/2);
    int halfPowsquare= halfPow * halfPow;
    if(n%2!=0){
        return x*halfPowsquare;
    }
    return halfPowsquare;
}
int main(){
    cout<<Pow(2,5)<<endl;
    return 0;
}