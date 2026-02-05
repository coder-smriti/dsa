#include<iostream>
#include<string>
using namespace std;
int main(){
    string str= "hello";
    cout<<str<<endl;
    str = "yellow";
    cout<<str[0]<<endl;
        cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;
    string str1;
    getline(cin, str1, '$');
    cout<<str1<<endl;
    return 0;
}