#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    Parent(){
        cout<<"constructor of parent\n";
    }
 ~Parent(){
        cout<<"distructor of parent\n";
 }
    };
class Child : public Parent {
    public:
    Child(){
        cout<<"constructor of child\n";
        }
        ~Child(){
        cout<<"distructor of child\n";
        }
};
int main(){
    Child Ch1;
    return 0;
}