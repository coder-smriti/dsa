#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
};
class circle : public shape{
  public:
  void draw ()  {
    cout<<"draw circle\n";
  }
};
class square : public shape{
  public:
  void draw ()  {
    cout<<"draw square\n";
  }
};
int main(){
    circle cir1;
    cir1.draw();

    square squ1;
    squ1.draw();
    return 0;
}