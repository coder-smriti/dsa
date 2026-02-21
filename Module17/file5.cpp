#include<iostream>
#include<string>
using namespace std;
class car{
string name;
string color;

public:
car(string nameValue, string colorValue){
    cout<<"constructer is called. object being created.\n";
    this ->name = nameValue;
    this ->color = colorValue;
}
void start(){
    cout<< "car has started\n";
}
void stop(){
    cout<<"car has stopped\n";
}
string getName(){
    return name;
}
};
int main(){
    car c1("maruti 800", "white");
    cout<<"car name : "<<c1.getName()<<endl;
    return 0;
}