#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"can vote\n";
    }
    if(age>=45){
        cout<<"contest for elections\n";
    }
    else{
        cout<<"can't vote\n";
    }
    return 0;
}