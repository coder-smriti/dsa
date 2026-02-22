#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    void show(){
        cout<<"parent class show...\n";
    }
    virtual void hello(){
            cout<<"parent hello\n";
        }
};
class Child : public Parent {
    public:
    void show(){
        cout<<"child class show..\n";
        }
        void hello(){
            cout<<"child hello\n";
        }
};
int main(){

    Parent parent1;
    Parent *ptr;
    ptr = &parent1;
    ptr->hello();
    return 0;
}