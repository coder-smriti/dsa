#include<iostream>
#include<string>
using namespace std;
class A{
    string secret="secret daata";
    friend class B;
    friend void revealScreat(A &obj);
};
class B{
    public:
    void showSecret(A &obj){
        cout<<obj.secret <<endl;
    }
};
void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}
int main(){
    A a1;
    B b1;
    //b1.showsecret();
    revealSecret(a1);
    return 0;
}