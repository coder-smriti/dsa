#include<iostream>
#include<string>
using namespace std;
class complexNumber{
    int real;
    int imag;
    public:
    complexNumber(int r, int i){
    real=r;
    imag=i;
}
void showNum(){
    cout<<real<<"-"<<imag<<"i\n";
}
complexNumber operator - (complexNumber &c2){
   int resReal = this->real - c2.real;
   int resImag = this->imag -c2.imag;
   complexNumber c3(resReal, resImag);
   cout<<"res=";
   return c3;
}
};
int main(){
    complexNumber c1(5,2);
    complexNumber c2(7,9);
    c1.showNum();
    c2.showNum();
    complexNumber c3=c1-c2;
    c3.showNum();
    return 0;

}