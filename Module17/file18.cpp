#include<iostream>
using namespace std;
int countsetbit(int num){
    int count=0;
    while(num>0){
        int lastdig=num & 1;
        count += lastdig;
        num = num >> 1;
    }
    cout << count <<endl;
    return count;
}
int main(){
    countsetbit(7);
    return 0;
}