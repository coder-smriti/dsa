#include<iostream>
using namespace std;
int main(){
    float price,P1,P2,P3,tax;/*insertion<<,extraction>>*/
    cout<<"Enter the price of pencil P1= ";
    cin>>price;
    cout<<"Enter the price of pen P2= ";
    cin>>price;
    cout<<"Enter the price of eraser P3= ";
    cin>>price;
    tax=18/100;
    price=(P1+P2+P3)*18/100;
    cout<<"The cost of item:"<<price<<endl;
    return 0;
}