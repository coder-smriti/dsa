#include <iostream>// 20,20 - output
using namespace std;
int main(){
    int x=10,y=5;
    int exp1 = (y*(x/y+x/y));
    int exp2 = (y*x/y+y*x/y);
    cout<< exp1<<","; 
    cout<< exp2<< " ";
    return 0;
}