#include <iostream>
using namespace std;
int main(){
    bool isAdult;
    int age;
    cout<<"enter age:";
    cin>>age;
    isAdult=age>=18? true : false;
    int a=10;
    int b=5;
    int largest = a>=b? a:b;
    cout<<"largest is"<<largest<<endl;
    return 0;
}