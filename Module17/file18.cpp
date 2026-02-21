#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eat"<<endl;
    }
};
class bird : public Animal {
   public: 
   void swim(){
        cout<<"swim"<<endl;
}
};
class fish : public Animal{
    public:
    void swim(){
        cout<<"swim"<<endl;
    }
};
class mammal : public Animal{
    public:
    void walk(){
        cout<<"walk"<<endl;
    }
};
int main(){
    bird f1;
    fish f2;
    mammal f3;
    cout<<<<endl;
    cout<< fish f2<<endl;
    cout<<mammal f3<<endl;
    return 0;
}