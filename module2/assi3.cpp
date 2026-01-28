#include<iostream>
using namespace std;
int main(){
    int p,r,t,SI;
    cout<<"Enter the principal p= ";
    cin>>p;
    cout<<"Enter the rate r= ";
    cin>>r;
    cout<<"Enter the time t= ";
    cin>>t;
    SI=p*r*t/100;
    cout<< "the Simpel interest = "<<SI<<endl;
    return 0;
}