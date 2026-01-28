#include <iostream>
using namespace std;
int main(){
    int income;
    float Tax;
    cout<<"Enter income(in lakhs):";
    cin>>income;
    if(income<5){
        Tax=0;
    }else if(income<=10){
        Tax=0.2*income;
    }else{
        Tax=0.3*income;
    }
     cout<<"Tax="<<(Tax*100000)<<endl;
    return 0;
}