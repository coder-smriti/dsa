#include<iostream>
using namespace std;
int funfac(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*funfac(n-1);
    }
}
    int main(){
        int result;
      result = funfac(4);
      cout<<result<<endl;
return 0;
}