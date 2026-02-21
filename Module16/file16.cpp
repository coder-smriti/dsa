#include<iostream>
using namespace std;
void clearithbit(int num, int i){
    int bitmask = (~0)<<i;
    num = num & bitmask;
    cout << num<< endl;
}
int main(){
    clearithbit(7,2);
    return 0;
}