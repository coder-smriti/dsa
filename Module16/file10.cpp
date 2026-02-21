#include<iostream>
using namespace std;
void OddOrEven(int num){
    if(!(num & 1)){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
}
int main(){
    OddOrEven(5);
    OddOrEven(6);
    OddOrEven(8);
    return 0;
}