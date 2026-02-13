#include<iostream>
using namespace std;
int boolisprime( int n){
    if(n<=1)
    return 0;
    for(int i=2; i<=n-1; i++){
    if(n%i==0){
    return 0;
 }
 }
    return 1;
}
int main(){
    int result;
   result= boolisprime(4);
   if(result == 1)
   cout<<"Prime";
   else
   cout<<"Non Prime";
    return 0;
}