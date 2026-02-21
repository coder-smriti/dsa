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
class Mammal: public Animal{
    public:
    string bloodType = "warm";
    Mammal(){
        bloodType= "warm";
    }
};
class Dog: public Mammal{
    public:
    void taiWag(){
        cout<<"a dog wags its tail\n";
    }
};
int main(){
Dog d1;
d1.eat();
d1.breathe();
d1.taiWag();
cout<<d1.bloodType<<endl;
return 0;
}