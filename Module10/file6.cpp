#include<iostream>
using namespace std;
    void changeA(int para){
    para=10;
    cout<<para<<"\n";
    }
    int main(){
        int a=10;
        changeA(a);
        cout<<a<<"\n";
    return 0;
}