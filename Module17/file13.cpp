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
class Fish: protected Animal{
    public:
    int fins;
    void swim(){
        eat();
      cout <<"swim\n";
    }
};
int main(){
Fish f1;
f1.fins = 3;
f1.swim();
return 0;
}