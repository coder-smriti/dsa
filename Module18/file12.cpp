#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breaths\n";
    }
};
class Fish: public Animal{
    public:
    int fins;
    void swim(){
      cout <<"swim\n";
    }
};
int main(){
Fish f1;
f1.fins = 3;
f1.swim();
f1.breathe();
f1.eat();
return 0;
}