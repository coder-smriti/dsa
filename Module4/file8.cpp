#include <iostream>
using namespace std;
int main(){
    bool isAdult;
    int age;
    cout<<"enter age:";
    cin>>age;
    isAdult=age>=18? true : false;
    int a=2;
    float b=2.0;
    float largest = a>=b? b:a;
    cout<<"largest is:"<<largest<<endl;
    return 0;
}