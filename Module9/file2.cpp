#include<iostream>
using namespace std;
void binToDec(int binNum){
    int n = binNum;
    int decNum=0;
    int pow=1;
    while(n>0){
        int lasDig = n%10;
        decNum += lasDig*pow;
        pow = pow*2;
        n=n/10;
    }
    cout<<decNum<<endl;
}
int main(){
    binToDec(101);
    return 0;
}