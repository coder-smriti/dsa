#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:";
    cin>>year;
    if(year%2==0){
        cout<<"This year is not a leap year.";
    }else{
        cout<<"This is a leap year.";
    }
    return 0;
}